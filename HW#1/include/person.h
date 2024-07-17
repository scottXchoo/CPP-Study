#ifndef PERSON_H
#define PERSON_H

#include <string> // 순서) STL => 라이브러리 => 헤더파일

#include "car.h"

class Person {
 public:
  explicit Person(std::string name);

  void assignCar(Car &assigned_car);
  // car <-> person 하나만 만들기

  ~Person();

 private:
  std::string name;
  Car *car;
};

#endif // PERSON_H