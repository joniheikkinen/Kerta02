#pragma once

#include <string>

class Person
{
private:
	std::string name;
	unsigned int age;
public:
	Person(std::string name, unsigned int age);
	~Person();

	// TODO implement
	void setName(std::string name);
	std::string getName();
};

