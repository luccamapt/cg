#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include "Vec3.hpp"
#include "Raio.hpp"
#include "Cor.hpp"

class Triangulo {
public:
    vec3 vertice1, vertice2, vertice3;
    Cor cor;

    Triangulo(const vec3& v1, const vec3& v2, const vec3& v3, const Cor& c);

    bool atingidoPorRaio(const Raio &raio, double t_min, double t_max, vec3 &pontoColisao) const;

    bool atingidoPorRaio(const Raio& raio, double& t) const;
};

#endif
