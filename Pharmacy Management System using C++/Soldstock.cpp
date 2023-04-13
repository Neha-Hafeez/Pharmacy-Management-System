#include<iostream>
#include"SoldStock.h"
using namespace std;

void sold_stock(double qty,double amnt)
{
	stock s;
	
	s.setQuantity(qty);
	s.setstock_price(amnt);
	cout<<"\t\t\tSold Stock Quantity :"<<s.getQuantity()<<endl;
	cout<<"\t\t\tPrice of Sold Stock :"<<s.getstock_price()<<endl;
}