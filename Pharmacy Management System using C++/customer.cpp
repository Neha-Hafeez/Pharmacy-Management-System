#include<iostream>
#include<string>
#include"Customer.h"
using namespace std;

void customer::buy()
{
	//this will make a choice 
	int choice=0;
	cout<<"\t\t\tPress 1 to buy\n\t\t\tPress 2 to Leave"<<endl;
	cin>>choice;
	if(choice==2)
	{
		exit(0);
	}
}