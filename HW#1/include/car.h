#ifndef CAR_H
#define CAR_H

#include <string>

class Person; // 상호 참조 문제를 위해 전방 선언(forward declaration)

class Car {
 public:
  Car(std::string name, Person* rider, std::string engine, std::string wheel);
  ~Car();

  bool ride;
  void move();
  bool getRide() const;
  void setRide();

  [[nodiscard]] const Person* getRider() const;
  [[nodiscard]] std::string getName() const;
  [[nodiscard]] std::string getEngine() const;
  [[nodiscard]] std::string getWheel() const;

  [[nodiscard]] int getPosition() const;
  [[nodiscard]] int getTotalDist() const;

 private:
  std::string name;
  Person* rider;
  std::string engine;
  std::string wheel;
  int position;
  int totalMovingDistance;
};

bool operator > (const Car &car1, const Car &car2);

#endif // CAR_H