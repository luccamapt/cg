#ifndef FORMA_HPP
#define FORMA_HPP

#include "Cor.hpp"

class Forma {
public:
    int largura;
    int altura;
    int profundidade;
    Cor cor;

    Forma(int w, int h, int d, Cor c) : largura(w), altura(h), profundidade(d), cor(c) {}
};

#endif // FORMA_HPP
