#pragma once
#include<iostream>
using namespace std;

class cosmatics
{
private:
	int Batch_no;
	string name;
	double quantity;
	double trade_price;
	double retail_price;
	string manufact_date;
	string expire_date;
public:
	cosmatics();

	void setBatch_no(int bn);
	int getBatch_no();

	void setname(string nam);
	string getname();

	void setquantity(double qtty);
	double getquantity();

	void settrade_price(double tp);
	double gettrade_price();

	void setretail_price(double rp);
	double getretail_price();

	void setmanufact_date(string mfg);
	string getmanufact_date();

	void setexpire_date(string exp);
	string getexpire_date();

	void insert();
	void display();

};

