#include "../include/Imagem.hpp"
#include "../include/Cor.hpp"
#include <cmath>

int main() {
  int image_width = 600;
  int image_height = 400;

  Imagem imagem(image_width, image_height);

  // Defina a cor da bandeira (branca) e a cor do círculo (vermelha)
  Cor corBranca(255, 255, 255);
  Cor corVermelha(255, 0, 0);
  Cor corPreta(0, 0, 0); // Preto para a borda

  // Preencha a imagem com a cor da bandeira (branca)
  for (int j = 0; j < image_height; ++j) {
    for (int i = 0; i < image_width; ++i) {
      imagem.setPixel(i, j, corBranca);
    }
  }

  // Calcule o raio do círculo (diametro = 3/5 da altura)
  int raio = static_cast<int>(3 * image_height / 10);

  // Calcule as coordenadas do centro do círculo
  int centro_x = image_width / 2;
  int centro_y = image_height / 2;

  // Desenhe o círculo vermelho
  for (int j = 0; j < image_height; ++j) {
    for (int i = 0; i < image_width; ++i) {
      // Calcule a distância do ponto ao centro do círculo
      double distancia = sqrt(pow(i - centro_x, 2) + pow(j - centro_y, 2));

      if (distancia <= raio) {
          imagem.setPixel(i, j, corVermelha);
      }
    }
  }

  // Desenhe a borda preta ao redor do retângulo
  int borda = 5; // Largura da borda preta
  for (int j = 0; j < image_height; ++j) {
    for (int i = 0; i < image_width; ++i) {
      if (i < borda || i >= image_width - borda || j < borda || j >= image_height - borda) {
        imagem.setPixel(i, j, corPreta);
      }
    }
  }

  // Salve a imagem como PPM
  imagem.salvarComoPPM();

  return 0;
}
