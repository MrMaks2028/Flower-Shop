#include "TradingPosition.h"
#include "Products.h"
#include <iostream>
#include <string>

TradingPosition::TradingPosition(){}
void TradingPosition::setProduct(Products& other) {
	_product = other;
}
Products TradingPosition::getProduct() {
	return _product;
}
void TradingPosition::setCount(int count) {
	_count = count;
}
int TradingPosition::getCount() {
	return _count;
}
void TradingPosition::setDeadlineRealization(int deadlineRealization) {
	_deadlineRealization = deadlineRealization;
}
int TradingPosition::getDeadlineRealization() {
	return _deadlineRealization;
}
void TradingPosition::setDeliveryPrice(int deliveryPrice) {
	_deliveryPrice = deliveryPrice;
}
int TradingPosition::getDeliveryPrice() {
	return _deliveryPrice;
}