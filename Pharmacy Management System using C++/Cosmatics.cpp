#include<iostream>
#include<string>
#include"Cosmatics.h"
using namespace std;

cosmatics::cosmatics()//constructor
{
	//we had fixed the values to avoid garbage values  
		Batch_no=0;
		name="";
		quantity=0.0;
		trade_price=0.0;
		retail_price=0.0;
		manufact_date="";
		expire_date="";
}
//getter and setter for attributes 
void cosmatics::setBatch_no(int bn)
	{
		this->Batch_no=bn;
	}
int cosmatics::getBatch_no()
	{
		return Batch_no;
	}

void cosmatics::setname(string nam)
	{
		this->name=nam;
	}
string cosmatics::getname()
	{
		return name;
	}

void cosmatics::setquantity(double qtty)
	{
		this->quantity=qtty;
	}
double cosmatics::getquantity()
	{
		return quantity;
	}

void cosmatics::settrade_price(double tp)
	{
		this->trade_price=tp;
	}
double cosmatics::gettrade_price()
	{
		return trade_price;
	}

void cosmatics::setretail_price(double rp)
	{
		this->retail_price=rp;
	}
double cosmatics::getretail_price()
	{
		return retail_price;
	}

void cosmatics::setmanufact_date(string mfg)
	{
		this->manufact_date=mfg;
	}
string cosmatics::getmanufact_date()
	{
		return manufact_date;
	}

void cosmatics::setexpire_date(string exp)
	{
		this->expire_date=exp;
	}
string cosmatics::getexpire_date()
	{
		return expire_date;
	}
//insert will take the information from the user 
void cosmatics::insert()
{
	cout << "Enter Batch No :" << endl;
	cin >> Batch_no;
	cout << "Enter Name :" << endl;
	cin.ignore();
	getline(cin, name);
	cout << "Enter Quantity :" << endl;
	cin >> quantity;
	cout << "Enter TradePrice :" << endl;
	cin >> trade_price;
	cout << "Enter RetailPrice :" << endl;
	cin >> retail_price;
	cout << "Enter Manufactured Date :" << endl;
	cin.ignore();
	getline(cin, manufact_date);
	cout << "Enter Expiry Date :" << endl;
	getline(cin, expire_date);
}
//this function will display the data entered by the users 
	void cosmatics::display()
	{
		cout<<"Batch No :"<<Batch_no<<endl;
		cout<<"Name :"<<name<<endl;
		cout<<"Quantity ="<<quantity<<endl;
		cout<<"TradePrice ="<<trade_price<<endl;
		cout<<"RetailPrice ="<<retail_price<<endl;
		cout<<"Manufactured Date :"<<manufact_date<<endl;
		cout<<"Expiry Date :"<<expire_date<<endl;
	}

