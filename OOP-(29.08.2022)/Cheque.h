#pragma once
#include "TradingPosition.h"
#include <iostream>
#include <string>
#include <map>

class Cheque {
public:
	Cheque();
	void addPosition(TradingPosition &other);
	void deletePosition(TradingPosition &other);

private:
	std::map<std::string, TradingPosition> _chequeList;
};
