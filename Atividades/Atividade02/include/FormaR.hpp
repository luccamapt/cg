#ifndef FORMAR_HPP
#define FORMAR_HPP

#include "Cor.hpp"
#include "vec3.hpp"
#include "Forma.hpp"

class FormaR {
public:
  int largura;
  int altura;
  int profundidade;
  Cor cor;
  vec3 rotacao;  // vec3 para representar a rotação nos 3 eixos

  FormaR(int w, int h, int d, Cor c, vec3 r) : largura(w), altura(h), profundidade(d), cor(c), rotacao(r) {}

  // Construtor adicional para instanciar com base em uma Forma
  FormaR(const Forma& forma, vec3 r) : largura(forma.largura), altura(forma.altura), profundidade(forma.profundidade), cor(forma.cor), rotacao(r) {}
};

#endif // FORMAR_HPP
