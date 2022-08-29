#pragma once
#include <iostream>
#include <string>

class Products {
public:
	Products();

	void setName(std::string name);
	std::string getName();
	void setWeight(int weight);
	int getWeight();
	void setColor(std::string color);
	std::string getColor();

private:
	std::string _name;
	int _weight = 0;
	std::string _color;
};