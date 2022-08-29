#pragma once
#include "TradingPosition.h"
#include <iostream>
#include <string>
#include <map>

class Storage {
public:
	Storage();

	std::map<std::string, TradingPosition> getList();
	TradingPosition getListPosition(const std::string key);

private:
	std::map<std::string, TradingPosition> _positionList;
};
