#ifndef CAR_CONFIG_H_
#define CAR_CONFIG_H_

#include <string>

struct CarConfig {
  std::string carName;
  std::string riderName;
  std::string engineType;
  std::string wheelType;
};

const CarConfig carConfigs[] = {
	{"Hyundai", "Chu", "Gasoline", "Aluminum"},
	{"Kia", "Kim", "Diesel", "Steel"},
	{"BMW", "Jung", "Electric", "Carbon"},
};

const int carCount = 3;
const int testNumber = 5;

#endif // CAR_CONFIG_H_
