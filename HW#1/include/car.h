#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
 public:
  // Car에 Person을 태우기 : rider
  Car(std::string name, std::string rider, std::string engine, std::string wheel);

  void move();
  void setIsRide(bool ride);

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
  int totalDist;
  bool isRide;
};

#endif // CAR_H