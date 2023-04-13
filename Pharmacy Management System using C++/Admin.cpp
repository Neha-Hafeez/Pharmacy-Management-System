#include<iostream>
#include<string>
#include"Admin.h"
using namespace std;

admin::admin()//this is programmer defined login information which could not be changed by user .
{
	name="NEHA";
	password="fjwu123";
	id=1234;
}

	void admin::setname(string nam)//this will set the value of name in nam
	{
		this->name=nam;
	}
	string admin::getname()//will return the name string
	{
		return name;
	}

	void admin::setid(int i)//set the id 
	{
		this->id=i;
	}
	int admin::getid()//return the id 
	{
		return id;
	}

	void admin::setpassword(string pas)//it will copy the password in the pas
	{
		this->password=pas;
	}
	string admin::getpassword()//return password
	{
		return password;
	}

	void admin::login()//this will check the login entry 
	{
		int login_ID=0,login=0; //set to zero here zero indicates true  
		string login_nam,login_password; //user will enter name id and password 
	do{
		//login interface
		cout<<"\n\n\t\t\t\tPharmacy Management System"<<endl;
		cout<<"\n\n\n\t\t\tLogin"<<endl;
		cout<<"\n\t\t\tID: ";
		cin>>login_ID;
		cin.ignore();
		cout<<"\n\t\t\tName: ";
		cin>>login_nam;
		cout<<"\n\t\t\tPassword: ";
		cin>>login_password;

		//checking login information
		if(login_nam==name&&login_ID==id&&login_password==password)//this wil check that the data enter by the user is correct or not 
		{
			for(int i=0;i<100;i++)//logging in interface
			{
				login=0;
			cout<<"\t\t\tLogging In\n\t\t\tPlease Wait................"<<endl;
			system("cls");
			}break;
		}
		else //returning interface 
		{
			cout<<"\t\t\tInvalid Id OR Password Please Enter Valid Input"<<endl;
			login=1;
		}system("cls");
		
	}while(login==1);//login sucessfull interface 
			
			system("cls");
			cout<<"\t\t\tPharmacy Management System"<<endl;
			cout<<"\t\t\t\tWelcome"<<endl;
		
	}
