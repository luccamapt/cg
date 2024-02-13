#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>

class vec3 {
public:
  double x, y, z;

  vec3() : x(0), y(0), z(0) {}
  vec3(double x, double y, double z) : x(x), y(y), z(z) {}

  double length() const {
    return std::sqrt(x * x + y * y + z * z);
  }

  double length_squared() const {
    return x * x + y * y + z * z;
  }

  // Sobrecarga de operadores para operações vetoriais
  vec3 operator-() const { return vec3(-x, -y, -z); }
  double operator[](int i) const {
    if (i == 0) return x;
    if (i == 1) return y;
    return z;
  }
  double& operator[](int i) {
    if (i == 0) return x;
    if (i == 1) return y;
    return z;
  }
};

// Funções utilitárias
inline std::ostream& operator<<(std::ostream& out, const vec3& v) {
  return out << v.x << ' ' << v.y << ' ' << v.z;
}

inline vec3 operator+(const vec3& u, const vec3& v) {
  return vec3(u.x + v.x, u.y + v.y, u.z + v.z);
}

inline vec3 operator-(const vec3& u, const vec3& v) {
  return vec3(u.x - v.x, u.y - v.y, u.z - v.z);
}

inline vec3 operator*(const vec3& u, const vec3& v) {
  return vec3(u.x * v.x, u.y * v.y, u.z * v.z);
}

inline vec3 operator*(double t, const vec3& v) {
  return vec3(t * v.x, t * v.y, t * v.z);
}

inline vec3 operator*(const vec3& v, double t) {
  return t * v;
}

inline vec3 operator/(vec3 v, double t) {
  return (1 / t) * v;
}

inline double dot(const vec3& u, const vec3& v) {
  return u.x * v.x + u.y * v.y + u.z * v.z;
}

inline vec3 cross(const vec3& u, const vec3& v) {
  return vec3(u.y * v.z - u.z * v.y, u.z * v.x - u.x * v.z, u.x * v.y - u.y * v.x);
}

inline vec3 unit_vector(const vec3& v) {
  return v / v.length();
}

#endif
