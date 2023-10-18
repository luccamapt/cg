#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include "Cor.hpp"
#include <vector>

class Imagem {
public:
  int largura;
  int altura;
  std::vector<std::vector<Cor>> pixels;

  Imagem(int w, int h);
  void setPixel(int x, int y, Cor cor);
  void salvarComoPPM();
};

#endif // IMAGEM_HPP
