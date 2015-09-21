#include "Car.h"
#include <iostream>

Car::Car(std::string modelName, unsigned int tankSize)
	: modelName(modelName),
	tankSize(tankSize),
	speed(0),
	gas(tankSize)
{
}

void Car::print(){
	std::cout << "Car: " << modelName << std::endl;
	std::cout << "Gas in tank: " << gas << std::endl;
	std::cout << "Tank size: " << tankSize << std::endl;
	std::cout << "Speed: " << speed << std::endl;
}

void Car::accelerate() {
	if (gas == 0) return;

	gas--;
	speed++;
}

void Car::brake(){
	if (speed == 0) return;

	speed--;
}

Car::~Car()
{
	std::cout << modelName << " tuhottiin." << std::endl;
}
