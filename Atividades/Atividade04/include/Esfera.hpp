#ifndef ESFERA_HPP
#define ESFERA_HPP

#include "Vec3.hpp"
#include "Raio.hpp"
#include "Cor.hpp"

class Esfera {
public:
    vec3 centro;
    double raio;
    Cor cor;

    Esfera(const vec3& centro, double raio, const Cor& cor);

    bool atingidoPorRaio(const Raio& raio, double t_min, double t_max, vec3& pontoColisao) const;
};

#endif
