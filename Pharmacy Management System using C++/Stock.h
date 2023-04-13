#pragma once
#include<iostream>
#include<string>
#include"Medicine.h"
#include"Cosmatics.h"
using namespace std;

class stock
{
private:
	double Quantity;
	double stock_price;

public:
	stock();
	medicine m;
	cosmatics c;
		
	
	void setQuantity(double qty);
	double getQuantity();

	void setstock_price(double sp);
	double getstock_price();

	void insert();
	void display();
};