#include <algorithm>
#include <iostream>

#include "car.h"
#include "car_config.h"
#include "person.h"

void printCars(Car *cars[], int size) {
  std::sort(cars, cars + size, [](const Car* a, const Car* b) {
	return *a > *b;
  });

  for (int i = 0; i < size; i++) {
	std::cout << "---------------------------" << std::endl;
	std::cout << "[" << cars[i]->getRider() << "] \n"
			  << " Car: " << cars[i]->getEngine() << " / " << cars[i]->getWheel() << "\n"
			  << " Current Position: " << cars[i]->getPosition() << "\n"
			  << " Total Distance: " << cars[i]->getTotalDist() << "\n";
  }
}

void init(Car *cars[], Person *persons[], int size) {
  for (int i = 0; i < size; i++) {
	cars[i] = new Car(
		carConfigs[i].carName,
		carConfigs[i].riderName,
		carConfigs[i].engineType,
		carConfigs[i].wheelType
	);
	persons[i] = new Person(carConfigs[i].riderName);
	persons[i]->assignCar(*cars[i]);

	std::cout << "Car initialized : " << cars[i]->getRider() << " rides " << cars[i]->getName() << std::endl;
  }
}

int main() {
  Car *cars[carCount];
  Person *persons[carCount];

  init(cars, persons, carCount);

  for (int i = 0; i < testNumber; i++) {
	for (auto car : cars) { car->move(); }
  }

  printCars(cars, carCount);

  for (int i = 0; i < carCount; i++) {
	delete cars[i];
	delete persons[i];
  }
}