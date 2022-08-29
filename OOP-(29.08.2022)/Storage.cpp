#include <iostream>
#include <string>
#include "Storage.h"

Storage::Storage() {}
std::map<std::string, Products> Storage::getList() {
	return _positionList;
}
Products Storage::getListPosition(const std::string key){
		return _positionList.at(key);
	}