#include <utility>
#include <random>

#include "car.h"
#include "utils.h"
#include "car_config.h"
#include "person.h"

Car::Car(std::string name, Person* rider, std::string engine, std::string wheel)
	: name(std::move(name)),
	  rider(rider),
	  engine(std::move(engine)),
	  wheel(std::move(wheel)),
	  position(0),
	  totalMovingDistance(0),
	  ride(false) {}
Car::~Car() = default;

void Car::move() {
  if (!getRide()) return;

  int distance = generateRandomNumber(minRandomNumber, maxRandomNumber);
  position += distance;
  totalMovingDistance += std::abs(distance);
}

bool Car::getRide() const {
  return ride;
}

void Car::setRide() {
  this->ride = true;
}

const Person* Car::getRider() const {
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

bool operator > (const Car &car1, const Car &car2) {
  return car1.getPosition() > car2.getPosition();
}