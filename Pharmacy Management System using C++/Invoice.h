#pragma once
#include<iostream>
#include"Pharmacy.h"
using namespace std;

class invoice
{
private:
	string date;
public:
	invoice();
	pharmacy p;
	void setdate(string dat);
	string getdate();

	void invoic();
	
};