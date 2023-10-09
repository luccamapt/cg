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

    for (int j = 0; j < altura; ++j) {
        for (int i = 0; i < largura; ++i) {
            std::cout << pixels[j][i].r << ' ' << pixels[j][i].g << ' ' << pixels[j][i].b << '\n';
        }
    }
}
