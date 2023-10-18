#ifndef CORA_HPP
#define CORA_HPP

#include "Cor.hpp"

class CorA : public Cor {
public:
    int a;  // Componente alpha (opacidade)

    CorA(int red, int green, int blue, int alpha);
};

#endif // CORA_HPP