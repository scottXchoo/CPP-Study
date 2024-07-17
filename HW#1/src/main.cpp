#include <iostream>
#include <algorithm>
#include "../include/car.h"
#include "../include/person.h"
#include "../config/car_config.h"
// root를 기준으로 파일 경로하는 법 찾기

// isBiggerThan(car1) : 이런 식으로 함수를 만들어서 비교하는 것도 좋은 방법
bool isComparePosition(Car *car1, Car *car2) {
  // 연산자 오버로딩 : car끼리 비교 가능! => compare 함수 안 써도 됨
  return car1->getPosition() < car2->getPosition();
}

// 예약어와 비슷하니 확실히 구별 짓기
void printCars(Car *cars[], int size) {
  std::sort(cars, cars + size, isComparePosition);

  for (int i = 0; i < size; i++) {
	std::cout << "------------------------" << std::endl;
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
  // Game.start() : 이런 식으로 시작하는 것도 좋은 방법
  Car *cars[carCount]; // 객체 자체를 리스트로 하면 되지 않나? C++에서는 포인터 잘 안 씀!!
  Person *persons[carCount];

  init(cars, persons, carCount);

  // while문보다는 for문으로! int iteration = 0
  for (int i = 0; i < testNumber; i++) {
	for (auto car : cars) { car->move(); } // auto : 공부하기 ~ 타입을 알아서 유추함
  }

  printCars(cars, carCount);

  // 동적 할당은 최대한 지양 : RT에서는 금방 터질 수 있음
  // RT에서 exception, 함수 포인터 지양
  for (int i = 0; i < carCount; i++) {
	delete cars[i];
	delete persons[i];
  }
}