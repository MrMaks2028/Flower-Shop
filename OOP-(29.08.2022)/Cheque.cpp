#include <iostream>
#include <string>
#include "TradingPosition.h"
#include "Cheque.h"

Cheque::Cheque() {}

void Cheque::addPosition(TradingPosition& other) {
	_chequeList.insert(other.getProduct().getName(), other);
}
void Cheque::deletePosition(TradingPosition& other) {

}