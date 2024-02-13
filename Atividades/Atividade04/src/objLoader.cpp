#include "../include/ObjLoader.hpp"

ObjLoader::ObjLoader(const std::string& filename){
    loadObjFile(filename);
}

void ObjLoader::loadObjFile(const std::string& filename){
  std::ifstream file(filename);
  
  if (!file.is_open()){
    std::cerr << "Erro ao abrir o arquivo: " << filename << std::endl;
    return;
  }

  std::string line;
  while (std::getline(file, line)) {
    std::istringstream iss(line);
    std::string type;
    iss >> type;

    if (type == "v") {
      vec3 vertex;
      iss >> vertex.x >> vertex.y >> vertex.z;
      vertices.push_back(vertex);
    } 
    else if (type == "vn") {
      vec3 normal;
      iss >> normal.x >> normal.y >> normal.z;
      normals.push_back(normal);
    } 
    else if (type == "f") {
      std::vector<int> face;
      int vertexIndex, normalIndex;
      char separator;
      while (iss >> vertexIndex >> separator >> separator >> normalIndex)
        face.push_back(vertexIndex - 1);  // OBJ usa índices baseados em 1
      faces.push_back(face);
    }
  }

  file.close();
}
