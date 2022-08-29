#pragma once
#include "Products.h"
#include <iostream>
#include <string>

class TradingPosition {
public:
	TradingPosition();
	void setProduct(Products& other);
	Products getProduct();
	void setCount(int count);
	int getCount();
	void setDeadlineRealization(int deadlineRealization);
	int getDeadlineRealization();
	void setDeliveryPrice(int deliveryPrice);
	int getDeliveryPrice();

private:
	Products _product;
	int _count = 0;
	int _deadlineRealization = 0;
	int _deliveryPrice = 0;
};

