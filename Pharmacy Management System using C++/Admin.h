#pragma once /*pragma once is a non-standard but widely supported preprocessor directive designed to cause the 
			 current source file to be included only once in a single compilation.*/
#include<iostream>
#include<string>
using namespace std;
class admin //this class will take the login information
{	
private://attribites of admin
	string name; 
	string password;
	int id;
	
public:
	admin();//constructor of admin class

	
	void setname(string nam);//will set nme in other string
	string getname();//will return the name

	void setid(int i);//will set id 
	int getid();//return id 

	void setpassword(string pas);//will copy password
	string getpassword();//will return password

	void login();/*will take the login info from the user if info is right 
				 if the information will be true the user will be allowed to 
				 enter in the program*/


};
