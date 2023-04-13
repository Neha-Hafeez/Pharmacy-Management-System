#include<iostream>
#include<string>
#include"Invoice.h"
using namespace std;


invoice::invoice()
{
	date="";
}

	void invoice::setdate(string dat)
	{
		this->date=dat;
	}
	string invoice::getdate()
	{
		return date;
	}

	void invoice::invoic()
	{
		cin.ignore();
		cout<<"Enter Date :"<<endl;
		getline(cin,date);
		system("cls");
		cout<<"\t\t\t"<<endl;
		cout<<"Date :"<<date<<endl;
		p.s.display();
	}