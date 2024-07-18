#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
 public:
  // Car에 Person을 태우기 : rider
  Car(std::string name, std::string rider, std::string engine, std::string wheel);

  bool ride;

  void move();
  bool getRide() const;

  [[nodiscard]] std::string getRider() const;
  [[nodiscard]] std::string getName() const;
  [[nodiscard]] std::string getEngine() const;
  [[nodiscard]] std::string getWheel() const;

  [[nodiscard]] int getPosition() const;
  [[nodiscard]] int getTotalDist() const;

  ~Car();

 private:
  std::string name;
  std::string rider;
  std::string engine;
  std::string wheel;
  int position;
  int totalMovingDistance;
};

bool operator > (const Car &car1, const Car &car2);

#endif // CAR_H