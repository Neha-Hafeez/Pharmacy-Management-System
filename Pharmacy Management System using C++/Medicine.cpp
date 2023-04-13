#include<iostream>
#include<string>
#include"Medicine.h"
using namespace std;

medicine::medicine()
{
		Batch_no=0;
		name="";
		quantity=0.0;
		trade_price=0.0;
		retail_price=0.0;
		manufact_date="";
		expire_date="";
}

	void medicine::setBatch_no(int bn)
	{
		this->Batch_no=bn;
	}
	int medicine::getBatch_no()
	{
		return Batch_no;
	}

	void medicine::setname(string nam)
	{
		this->name=nam;
	}
	string medicine::getname()
	{
		return name;
	}

	void medicine::setquantity(double qtty)
	{
		this->quantity=qtty;
	}
	double medicine::getquantity()
	{
		return quantity;
	}

	void medicine::settrade_price(double tp)
	{
		this->trade_price=tp;
	}
	double medicine::gettrade_price()
	{
		return trade_price;
	}

	void medicine::setretail_price(double rp)
	{
		this->retail_price=rp;
	}
	double medicine::getretail_price()
	{
		return retail_price;
	}

	void medicine::setmanufact_date(string mfg)
	{
		this->manufact_date=mfg;
	}
	string medicine::getmanufact_date()
	{
		return manufact_date;
	}

	void medicine::setexpire_date(string exp)
	{
		this->expire_date=exp;
	}
	string medicine::getexpire_date()
	{
		return expire_date;
	}


	void medicine::insert()
	{
		cout<<"Enter Batch No :"<<endl;
		cin>>Batch_no;
		setBatch_no(Batch_no);
		cout<<"Enter Name :"<<endl;
		cin.ignore();
		getline(cin,name);
		cout<<"Enter Quantity :"<<endl;
		cin>>quantity;
		cout<<"Enter TradePrice :"<<endl;
		cin>>trade_price;
		cout<<"Enter RetailPrice :"<<endl;
		cin>>retail_price;
		cout<<"Enter Manufactured Date :"<<endl;
		cin.ignore();
		getline(cin,manufact_date);
		cout<<"Enter Expiry Date :"<<endl;
		getline(cin,expire_date);
	}
	void medicine::display()
	{
		cout<<"Batch No :"<<getBatch_no()<<endl;
		cout<<"Name :"<<name<<endl;
		cout<<"Quantity ="<<quantity<<endl;
		cout<<"TradePrice ="<<trade_price<<endl;
		cout<<"RetailPrice ="<<retail_price<<endl;
		cout<<"Manufactured Date :"<<manufact_date<<endl;
		cout<<"Expiry Date :"<<expire_date<<endl;
	}

