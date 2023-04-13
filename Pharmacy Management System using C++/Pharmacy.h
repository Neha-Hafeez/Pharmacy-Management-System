#pragma once
#include<iostream>
//agregating three headerfiles of admin customer and soldstock
#include"Admin.h"    
#include"Customer.h"
#include"SoldStock.h"
#include<string>
using namespace std;
//this whole class is the main class of whole program 
class pharmacy
{
private:
	//name address and phone number of the customer
	string name;
	string address;
	int phone_no;
public:
	pharmacy();//constructor 

	admin a;//admin class object a 
	customer c;//customer class object c
	soldstock s;//soldstock class object s

//get and set functions for managing customer data 
	void setname(string nam);
	string getname();

	void setaddress(string addrs);
	string getaddress();

	void setphone_no(int ph);
	int getphone_no();
//these are all the functions in our program 
	void addStock(soldstock s[],int size);
	void search(soldstock s[],int size);
	void modify(soldstock s[],int size);
	void Delete(soldstock s[],int size);
	void sell(soldstock s[],int size);
	void display_all(soldstock s[],int size);
	void invoice(soldstock s[],int size);
};