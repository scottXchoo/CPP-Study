#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
 public:
  explicit Person(std::string name);
  ~Person();

  std::string getName() const;

 private:
  std::string name;

};

#endif // PERSON_H