#include <iostream>
#include <string>
#include "FlowerShop.h"
#include "Worker.h"
#include "Products.h"
#include "Storage.h"
#include "Cheque.h"
#include "SafetySystem.h"

int main() {
	using namespace std;

	SafetySystem sf;
	for (int i = 0; i < 20; i++)
		Worker(i + 1, "Smith", "Jhone", "Jhonovich", "SJJ00");
	
	return 0;
}