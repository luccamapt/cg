#ifndef OBJLOADER_HPP
#define OBJLOADER_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Vec3.hpp"

class ObjLoader {
public:
  std::vector<vec3> vertices;
  std::vector<vec3> normals;
  std::vector<std::vector<int>> faces;

  ObjLoader(const std::string& filename);

  void loadObjFile(const std::string& filename);
};

#endif
