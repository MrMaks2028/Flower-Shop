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
	static void addWorker(Worker other);

private:
	static std::vector<Worker> _workerList;
};
