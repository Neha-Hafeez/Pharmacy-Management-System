#include<iostream>
#include"Pharmacy.h"
#include"SoldStock.h"
#include<string>
using namespace std;

int main()
{
	int size=1000;
	pharmacy p1;
	soldstock s1[1000];
	p1.a.login();
	for(;;)
	{
	cout<<"\t\t\t\tMenu"<<endl;
	cout<<"\t\t\tPress 1 to Add Stock\n\t\t\tPress 2 to Search an Item\n\t\t\tPress 3 to Modify Details\n\t\t\tPress 4 to Delete an Item\n\t\t\tPress 5 to sell an Item\n\t\t\tPress 6 to Display All\n\t\t\tpress 7 for invoice \n\t\t\tPress 0 to Exit"<<endl;
	int Input=0;
	cin>>Input;
	switch(Input)
	{
	case 1:
		{
	
			cout<<"Enter no of items to add"<<endl;
			cin>>size;
		
					p1.addStock(s1,size);
		
		}break;
		case 2:
		{
			
			p1.search(s1,size);
			
		}break;
	case 3:
		{
			p1.modify(s1,size);
		}break;
	case 4:
		{
			p1.Delete(s1,size);
		}break;
	case 5:
		{
			p1.sell(s1,size);
		}break;
	case 6:
		{
			p1.display_all(s1,size);
		}break;
	case 7:
	{
		p1.invoice(s1,size);
	}break;
	case 0:
		{
			for(int i=0;i<50;i++)
			{
				cout<<"\t\t\tLoging Out......."<<endl;
				system("cls");
			}
			exit(0);
		}break;
	default:
		{
			cout<<"Invalid Input"<<endl;
		}
	}
	}
	system("Pause");

	return 0;
}