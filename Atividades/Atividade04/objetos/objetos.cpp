#include "../include/Imagem.hpp"
#include "../include/Cor.hpp"
#include "../include/Vec3.hpp"
#include "../include/Raio.hpp"
#include "../include/Esfera.hpp"
#include "../include/Triangulo.hpp"

int main() {
  // Configuração da imagem
  int largura = 800;
  int altura = 600;
  Imagem imagem(largura, altura);

  // Configuração da cena
  vec3 origemCamera(0, 0, 0);
  double distanciaFocal = 1.0;

  // Configuração da esfera
  vec3 centroEsfera(0, 0, -1);
  double raioEsfera = 0.5;
  Cor corEsfera(0, 0, 1); // Azul
  Esfera esfera(centroEsfera, raioEsfera, corEsfera);

  // Configuração do triângulo
  vec3 v0(-1, -1, -2);
  vec3 v1(1, -1, -2);
  vec3 v2(0, 1, -2);
  Cor corTriangulo(0, 0, 1); // Azul
  Triangulo triangulo(v0, v1, v2, corTriangulo);

  // Configuração da câmera
  int amostrasPorPixel = 100;

  // Renderização da cena
  for (int j = altura - 1; j >= 0; --j) {
    for (int i = 0; i < largura; ++i) {
      Cor corPixel(0, 0, 0);

      for (int s = 0; s < amostrasPorPixel; ++s) {
        // Gera um raio para cada amostra
        double u = (i + random_double()) / largura;
        double v = (j + random_double()) / altura;
        Ray raio = Ray::criarRaio(origemCamera, u, v, distanciaFocal);

        // Verifica interseções com a esfera
        vec3 pontoColisao;
        if (esfera.atingidoPorRaio(raio, 0.0, std::numeric_limits<double>::infinity(), pontoColisao)) {
          corPixel += corEsfera;
        }

        // Verifica interseções com o triângulo
        if (triangulo.atingidoPorRaio(raio, 0.0, std::numeric_limits<double>::infinity(), pontoColisao)) {
          corPixel += corTriangulo;
        }
    }

      corPixel /= amostrasPorPixel;
      corPixel = Cor(sqrt(corPixel.r), sqrt(corPixel.g), sqrt(corPixel.b)); // Correção de gamma

      imagem.setPixel(i, j, corPixel);
    }
  }

  // Salva a imagem como PPM
  imagem.salvarComoPPM();

  return 0;
}
