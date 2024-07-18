#include <utility>

#include "../include/person.h"

Person::Person(std::string name) : name(std::move(name)) {}
Person::~Person() = default;

std::string Person::getName() const {
  return name;
}