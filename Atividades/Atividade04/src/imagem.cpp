#include "../include/Imagem.hpp"
#include <iostream>

Imagem::Imagem(int w, int h) : largura(w), altura(h) {
  pixels.resize(altura, std::vector<Cor>(largura, Cor(255, 255, 255)));
}

void Imagem::setPixel(int x, int y, Cor cor) {
  if (x >= 0 && x < largura && y >= 0 && y < altura) {
    pixels[y][x] = cor;
  }
}

void Imagem::salvarComoPPM() {
  std::cout << "P3\n"
            << largura << ' ' << altura << "\n255\n";

  for (int i = 0; i < altura; i++) {
    for (int j = 0; j < largura; j++) {
      std::cout << pixels[i][j].r << ' ' << pixels[i][j].g << ' ' << pixels[i][j].b << '\n';
    }
  }
}
