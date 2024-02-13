#include "../include/Esfera.hpp"
#include <cmath>

Esfera::Esfera(const vec3& centro, double raio, const Cor& cor) : centro(centro), raio(raio), cor(cor) {}

bool Esfera::atingidoPorRaio(const Raio& raio, double t_min, double t_max, vec3& pontoColisao) const {
  vec3 oc = raio.origem - centro;
  double a = dot(raio.direcao, raio.direcao);
  double b = dot(oc, raio.direcao);
  double c = dot(oc, oc);

  double discriminante = b * b - a * c;

  if (discriminante > 0) {
    double raiz = sqrt(discriminante);
    double temp = (-b - raiz) / a;

    if (temp < t_max && temp > t_min) {
      pontoColisao = raio.ponto(temp);
      return true;
    }

    temp = (-b + raiz) / a;

    if (temp < t_max && temp > t_min) {
      pontoColisao = raio.ponto(temp);
      return true;
    }
  }

  return false;
}
