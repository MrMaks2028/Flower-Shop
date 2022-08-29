#include "Products.h"
#include <iostream>
#include <string>

Products::Products() {}
void Products::setName(std::string name) {
	_name = name;
}
std::string Products::getName() {
	return _name;
}
void Products::setWeight(int weight) {
	_weight = weight;
}
int Products::getWeight() {
	return _weight;
}
void Products::setColor(std::string color) {
	_color = color;
}
std::string Products::getColor() {
	return _color;
}
