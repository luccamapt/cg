#include "../include/Imagem.hpp"
#include "../include/Cor.hpp"

int main() {
  int image_width = 256;
  int image_height = 256;

  Imagem imagem(image_width, image_height);

  int left_side = static_cast<int>(image_width / 2);
  int right_side = static_cast<int>(image_width / 2);

  for (int j = 0; j < image_height - 1; ++j) {
    for (int i = 0; i < image_width; ++i) {
      Cor cor(255, 255, 255);

      if (i >= left_side && i <= right_side)
        cor = Cor(255, 0, 0);

      imagem.setPixel(i, j, cor);
    }

    if (j % 2 == 0) {
      left_side--;
      right_side++;
    }
  }

  for (int i = 0; i < image_width; ++i)
    imagem.setPixel(i, image_height - 1, Cor(255, 0, 0));

  imagem.salvarComoPPM();

  return 0;
}
