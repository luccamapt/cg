#include <iostream>

int main() {

  // Image
  int prop = 50;
  int image_width = 20 * prop;
  int image_height = 16 * prop;

  // vermelho: 240 40 40
  // pele1: 230 170 130
  // azul: 30 30 170
  // amarelo: 250 200 50
  // marrom: 150 100 50

  // Render
  std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

  // linha 1
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.4 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.2 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.4 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }

  // linha 2
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.3 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.2 * image_width); i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; // preto
    for (int i = 0; i < static_cast<int>(0.3 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }

  // linha 3
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.25 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.25 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }

  // linha 4

  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.2 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < static_cast<int>(0.2 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.2 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }    

  // linha 5

  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < static_cast<int>(0.3 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; // preto
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }    

  // linha 6
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < static_cast<int>(0.4 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; // preto
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }    

  // linha 7
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < static_cast<int>(0.5 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; // preto
    for (int i = 0; i < prop; i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }    

  // linha 8
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; // preto
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; // preto
    for (int i = 0; i < prop; i++) std::cout << 240 << ' ' << 40 << ' ' << 40 << '\n'; //vermelho
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }    

  // linha 9
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++)std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; // preto
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; // preto
    for (int i = 0; i < prop; i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }    

  // linha 10
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; // preto
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; // preto
    for (int i = 0; i < prop; i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }

  // linha 11
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.4 * image_width); i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }

  // linha 12
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.2 * image_width); i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < static_cast<int>(0.1 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.15 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }

  // linha 13
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.2 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < static_cast<int>(0.4 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.2 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }

  // linha 14
  for (int j = 0; j < prop; j++){
    for (int i = 0; i < static_cast<int>(0.25 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < static_cast<int>(0.3 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < prop; i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.25 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }

  // linha 15
  for (int j = 0; j < prop; j++){  
    for (int i = 0; i < static_cast<int>(0.3 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.3 * image_width); i++) std::cout << 230 << ' ' << 170 << ' ' << 130 << '\n'; //pele1
    for (int i = 0; i < prop; i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.3 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }

  // linha 16
  for (int j = 0; j < prop; j++){  
    for (int i = 0; i < static_cast<int>(0.3 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
    for (int i = 0; i < static_cast<int>(0.4 * image_width); i++) std::cout << 0 << ' ' << 0 << ' ' << 0 << '\n'; //preto
    for (int i = 0; i < static_cast<int>(0.3 * image_width); i++) std::cout << 255 << ' ' << 255 << ' ' << 255 << '\n'; //branco
  }
}














// #include "../include/Imagem.hpp"
// #include "../include/Cor.hpp"

// int main() {
//   int prop = 1;
//   int image_width = 20 * prop;
//   int image_height = 16 * prop;

//   Imagem imagem(image_width, image_height);

//   Cor branco(255, 255, 255);
//   Cor preto(0, 0, 0);
//   Cor vermelho(240, 40, 40);
//   Cor pele1(230, 170, 130);

//   for (int linha = 0; linha < 16 * prop; linha++) {
//     // linha 1
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.4 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.2 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.4 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }

//     // linha 2
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.3 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.2 * image_width) * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.3 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }

//     // linha 3
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.25 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.25 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }

//     // linha 4
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.2 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < static_cast<int>(0.2 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.2 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }    

//     // linha 5

//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < static_cast<int>(0.3 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }    

//     // linha 6
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < static_cast<int>(0.4 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }    

//     // linha 7
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < static_cast<int>(0.5 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }    

//     // linha 8
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, vermelho); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }    

//     // linha 9
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }    

//     // linha 10
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }

//     // linha 11
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.4 * image_width) * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }

//     // linha 12
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.2 * image_width) * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < static_cast<int>(0.1 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.15 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }

//     // linha 13
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.2 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < static_cast<int>(0.4 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.2 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }

//     // linha 14
//     for (int j = 0; j < prop; j++){
//       int i = 1;
//       while (i < static_cast<int>(0.25 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < static_cast<int>(0.3 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.25 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }

//     // linha 15
//     for (int j = 0; j < prop; j++){
//       int i = 1;  
//       while (i < static_cast<int>(0.3 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.3 * image_width) * i){ imagem.setPixel(i-1, linha, pele1); i++;}
//       while (i < prop * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.3 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }

//     // linha 16
//     for (int j = 0; j < prop; j++){
//       int i = 1;  
//       while (i < static_cast<int>(0.3 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//       while (i < static_cast<int>(0.4 * image_width) * i){ imagem.setPixel(i-1, linha, preto); i++;}
//       while (i < static_cast<int>(0.3 * image_width) * i){ imagem.setPixel(i-1, linha, branco); i++;}
//     }
//   }

//   imagem.salvarComoPPM();

//   return 0;
// }
