#include <utility>

#include "../include/person.h"

Person::Person(std::string name) : name(std::move(name)), car(nullptr) {}
// nullptr을 넣는 상황을 최대한 만들면 XXX => 이게 진짜 맞나? 오히려 Car가 Person이 갖고 있어야하지 않나?
// 매개변수에 아예 car를 넣어버리면 해결 가능
// 소유권 이전 ?!?

void Person::assignCar(Car &assigned_car) {
  // 웬만하면 this 붙이기!
  this->car = &assigned_car;
  this->car->setIsRide(true);
}

Person::~Person() = default;