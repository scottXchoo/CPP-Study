#include <utility>
#include <random>
#include "../include/car.h"
#include "../include/utils.h"

Car::Car(std::string name, std::string rider, std::string engine, std::string wheel)
	: name(std::move(name)),
	  rider(std::move(rider)),
	  engine(std::move(engine)),
	  wheel(std::move(wheel)),
	  position(0),
	  totalMovingDistance(0),
	  isRide(false) {} // bool ride라는 필드를 두고 isRide(getter)를 메서드로 변경

// 의존성이 있으면, 그 순서대로 맞추기 = 술술 읽히도록!
void Car::move() {
  if (!isRide) return;  // Early return

  int distance = generateRandomNumber(-10, 100);  // Magic numer 처리
  position += distance;
  totalMovingDistance += std::abs(distance);
}

void Car::setIsRide(bool ride) {
  isRide = ride;
}

std::string Car::getRider() const {
  return rider;
}

std::string Car::getName() const {
  return name;
}

std::string Car::getEngine() const {
  return engine;
}

std::string Car::getWheel() const {
  return wheel;
}

int Car::getPosition() const {
  return position;
}

int Car::getTotalDist() const {
  return totalMovingDistance;
}

Car::~Car() = default;