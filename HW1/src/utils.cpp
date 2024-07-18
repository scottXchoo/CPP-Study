#include "../include/utils.h"
#include <random>

int generateRandomNumber(int min, int max) {
  std::random_device rd; // 하드웨어 난수 생성기
  std::mt19937 gen(rd()); // Mersenne Twister 엔진 초기화
  std::uniform_int_distribution<int> distribution(min, max); // [min, max] 균등 분포

  return distribution(gen);
}