#pragma once
#include "Products.h"
#include <iostream>
#include <string>
#include <map>

class ShowCase {
public:
	ShowCase();

	void takeFromStorage(std::string pos);

private:
	std::map<std::string, Products> productList;
};

