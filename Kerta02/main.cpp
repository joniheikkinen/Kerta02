#include "Person.h"
#include "Player.h"
#include "Car.h"
#include <iostream>

Car carFunc(){
	return Car("Audi", 55);
}

int main(int argc, char** argv) {

#pragma region asd

	Person personA("Matti Nykänen", 50);
	Person personB("Johanna Tukiainen", 60);
	Person personC("Henna Kalinainen", 75);

	std::cout << personA.getName() << std::endl;

	Vector2 v1;
	Vector2 v2(10.0f, 10.0f);

	Player player1;
	player1.setPosition(Vector2(256.0f, 12.24f));
	player1.print();

	{
		{
			Car nissan("Nissan", 1232);
		}
		Car mersu("Mersu", 190);
		mersu.print();

		for (size_t i = 0; i < 5; i++){
			mersu.accelerate();
		}

		std::cout << std::endl;

		mersu.print();

		for (size_t i = 0; i < 3; i++){
			mersu.brake();
		}

		std::cout << std::endl;

		mersu.print();

		return 0;
	}
	Car car = carFunc();
	car.print();
	return 0;
}