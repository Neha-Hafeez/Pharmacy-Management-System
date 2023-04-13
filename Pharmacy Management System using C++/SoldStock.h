#pragma once
#include<iostream>
#include"Stock.h"
using namespace std;
class soldstock:public stock
{
public:
	
	void sold_stock(double qty,double amnt);
};