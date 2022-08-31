 #include "SafetySystem.h"
#include "Worker.h"
#include <iostream>
#include <string>

SafetySystem::SafetySystem(){}
void SafetySystem::setWorkerList(){
	
}
std::vector<Worker> SafetySystem::getWorkerList(){
	return _workerList;
}
void SafetySystem::addWorker(Worker other) {
	_workerList.push_back(other);
}