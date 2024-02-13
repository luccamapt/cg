#include "../include/Triangulo.hpp"
#include <cmath>

Triangulo::Triangulo(const vec3& v0, const vec3& v1, const vec3& v2, const Cor& cor) : vertice1(v0), vertice2(v1), vertice3(v2), cor(cor) {}

bool Triangulo::atingidoPorRaio(const Raio& raio, double t_min, double t_max, vec3& pontoColisao) const {
  vec3 aresta1 = v1 - v0;
  vec3 aresta2 = v2 - v0;

  vec3 normal = cross(aresta1, aresta2);
  normal = unit_vector(normal);

  double discriminante = dot(normal, normal);

  if (discriminante > 0) {
    vec3 oc = raio.origem - v0;
    double temp = dot(oc, normal) / dot(raio.direcao, normal);

    if (temp < t_max && temp > t_min) {
      pontoColisao = raio.ponto(temp);

      // Verifica se o ponto de colisão está dentro do triângulo
      vec3 vetorParaPonto = pontoColisao - v0;

      double u = dot(vetorParaPonto, aresta1) / discriminante;
      double v = dot(vetorParaPonto, aresta2) / discriminante;

      if (u >= 0 && v >= 0 && u + v <= 1) {
          return true;
      }
    }
  }

  return false;
}
