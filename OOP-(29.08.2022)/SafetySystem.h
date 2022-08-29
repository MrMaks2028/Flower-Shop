#pragma once
#include "Worker.h"
#include <iostream>
#include <string>
#include <vector>

class SafetySystem {
public:
	SafetySystem();
	void setWorkerList();
	std::vector<Worker> getWorkerList();
	void addWorker(Worker& other);

private:
	std::vector<Worker> _workerList;
};
