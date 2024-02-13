#ifndef RAIO_HPP
#define RAIO_HPP

#include "Vec3.hpp"  // Certifique-se de incluir a classe vec3

class Raio {
public:
    vec3 origem;
    vec3 direcao;

    Raio(const vec3& origem, const vec3& direcao) : origem(origem), direcao(direcao) {}

    // Método para obter a posição ao longo do raio com base no parâmetro t
    vec3 ponto(double t) const {
        return origem + t * direcao;
    }
};

#endif // RAIO_HPP
