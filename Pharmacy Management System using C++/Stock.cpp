#include<iostream>
#include<string>
#include"Stock.h"
using namespace std;


stock::stock()
{
	Quantity=0.0;
	stock_price=0.0;
}

	void stock::setQuantity(double qty)
	{
		this->Quantity=qty;
	}
	double stock::getQuantity()
	{
		return Quantity;
	}

	void stock::setstock_price(double sp)
	{
		this->stock_price=sp;
	}
	double stock::getstock_price()
	{
		return stock_price;
	}
int input=0;

	void stock::insert()
	{
		cout<<"Enter Stock Quantity "<<endl;
		cin>>Quantity;
		cout<<"Enter Stock Price "<<endl;
		cin>>stock_price;
		cout<<"Press 1 to Add Medicine\nPress 2 to Add Cosmatics"<<endl;
		cin>>input;
		if(input==1)
		{
		m.insert();
		}
		else if(input==2)
		{
			c.insert();
		}
	}
	int input2=0;
	void stock::display()
	{
		cout<<"Stock Quantity :"<<Quantity<<endl;
		cout<<"Total Stock Price :"<<stock_price<<endl; 
		cout<<"Press 1 to display Medicine\nPress 2 to display Cosmatics"<<endl;
		cin>>input;
		if(input==1)
		{
			m.display();
		}
		else if(input==2)
		{
			c.display();
		}
	}

 