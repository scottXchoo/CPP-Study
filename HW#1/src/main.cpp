#include <algorithm>
#include <iostream>

#include "car.h"
#include "car_config.h"
#include "person.h"

// isBiggerThan(car1) : 이런 식으로 함수를 만들어서 비교하는 것도 좋은 방법
bool isComparePosition(Car *car1, Car *car2) {
  // 연산자 오버로딩 : car끼리 비교 가능! => compare 함수 안 써도 됨
  return car1->getPosition() < car2->getPosition();
}

void printCars(Car *cars[], int size) {
  std::sort(cars, cars + size, isComparePosition);

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