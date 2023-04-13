#include<iostream>
#include<string>
#include"Pharmacy.h"
#include<iomanip>
using namespace std;

pharmacy::pharmacy()
{
	//we set the values in the begining to avoid garbage values 
	name="";
	address="";
	phone_no=0;
}
//get and set functions 
	void pharmacy::setname(string nam)
	{
		this->name=nam;
	}
	string pharmacy::getname()
	{
		return name;
	}

	void pharmacy::setaddress(string addrs)
	{
		this->address=addrs;
	}
	string pharmacy::getaddress()
	{
		return address;
	}

	void pharmacy::setphone_no(int ph)
	{
		this->phone_no=ph;
	}
	int pharmacy::getphone_no()
	{
		return phone_no;
	}
//agregated the addstock class the user will add the item number 
	void  pharmacy::addStock(soldstock s[],int size)
	{
		this->s=*s;
		
		for(int i=0;i<size;i++)
			{
				cout<<"Add Item No "<<i+1<<endl;
				s[i].insert();
				system("cls");
			}
	}
	string Prodname;
	//merged the soldstock class to enter product name .
	void pharmacy::search(soldstock s[],int size)
	{
				//this->s=s[size];
			
		cout<<"Enter Product Name "<<endl;
		cin.ignore();
		getline(cin,Prodname);
		for(int i=0;i<size;i++)
		{
			/*here m is for medincine and c is for cosmetics if product name matches 
			 the name entered in the getname function display the medincine or display the 
			 cosmetics else the product is not available in the stock */
			if(s[i].m.getname()==Prodname)
			{
				s[i].m.display();
				break;
			}
			else if(s[0].c.getname()==Prodname)
			{
				s[i].c.display();
				break;
			}
			else
			{
				cout<<"Not Avaiable in Stock"<<endl;
				break;
			}
		}
	
		system("Pause");// wait for the user to view the details 
		system("cls");// clear the screen 
	}
	// this function will update the stock 
	void pharmacy::modify(soldstock s[],int size)
	{
		//this->s=s[size];
		cout<<endl;
		cout<<"Enter Product Name "<<endl;
		cin.ignore();
		getline(cin,Prodname);
		/*to modify or update the detials of cosmetics and medicines if the number
		is not available then it will display not available in stock */

		for(int i=0;i<size;i++)
		{
			if(s[i].m.getname()==Prodname)
			{
				cout<<"Modify Details  "<<endl;
				s[i].m.insert();
				cout<<"Modified Details  "<<endl;
				s[i].m.display();
				system("Pause");
				system("cls");
				break;
			}
			else if(s[0].c.getname()==Prodname)
			{
				cout<<"Modify Details  "<<endl;
				s[i].c.insert();
				cout<<"Modified Details  "<<endl;
				s[i].c.display();
				system("Pause");
				system("cls");
				break;
			}
			else
			{
				cout<<"Not Avaiable in Stock"<<endl;
				break;
			}
		}
		
	}
	//this class will delete the stock demanded by the user 
	void pharmacy::Delete(soldstock s[],int size)
	{
		//this->s=*s;
		
		cout<<"Enter Product Name "<<endl;
		cin.ignore();
		getline(cin,Prodname);
		// this will search the data and will reset all the quatities and this is how it will del all the data
		//medicine
		for(int i=0;i<size;i++)
		{
			if(s[i].m.getname()==Prodname)
			{
				s[i].m.setBatch_no(0);
				s[i].m.setquantity(0);
				s[i].m.setretail_price(0.0);
				s[i].m.setname("");
				s[i].m.setexpire_date("");
				s[i].m.settrade_price(0.0);
				s[i].m.setmanufact_date("");
				cout<<"\t\t\tRecord Deleted......."<<endl;
				system("Pause");
				system("cls");
				break;
			}
			//cosmetics
			else if(s[0].c.getname()==Prodname)
			{
				s[i].c.setBatch_no(0);
				s[i].c.setquantity(0);
				s[i].c.setretail_price(0.0);
				s[i].c.setname("");
				s[i].c.setexpire_date("");
				s[i].c.settrade_price(0.0);
				s[i].c.setmanufact_date("");
				cout<<"\t\t\tRecord Deleted......."<<endl;
				system("Pause");
				system("cls");
				break;
			}
			//if record not available 
			else
			{
				cout<<"Not Avaiable in Stock"<<endl;
				break;
			}
		}	
	}
	//this will enter the sold items in the list 
	double qty=0;
	double decrmnt;
	double total_price=0;
	void pharmacy::sell(soldstock s[],int size)
	{
More:
		customer c;
		c.buy();
		int more_or_invoice=0;
		double prod_qty=0;
		int i;
		//this->s=*s;
		
	cout<<"Enter Product Name "<<endl;
		cin.ignore();
		getline(cin,Prodname);
		//if the product entered will be in the product list then it will procede
		//medicine
		for( i=0;i<size;i++)
		{
			if(s[i].m.getname()==Prodname)
			{
				
				s[i].m.display();
				cout<<"\t\t\tEnter Quantity to sell"<<endl;
				cin>>qty;
				total_price=s[i].m.getretail_price();
				total_price=total_price*qty;
				//s[i].sold_stock(qty,total_price);
				if(s[i].m.getquantity()==0)//this will check the availability 
				{
					cout<<"\t\t\tOut of Stock"<<endl;
					break;
				}
				prod_qty=s[i].m.getquantity();//will set the new quantity 
				prod_qty=prod_qty-qty;
				s[i].m.setquantity(prod_qty);
				 decrmnt=s[i].getQuantity()-qty;
				s[i].setQuantity(decrmnt);	

				//if there is more data to enter in sales or is used to create the bill 
				cout<<"\t\t\tPress 1 to Buy More\n\t\t\tPress 2 For Invoice"<<endl;
					cin>>more_or_invoice;
					if(more_or_invoice==1)
					{
						goto More;//will repeat the cycle 
					}
					else
					{
						invoice(s,i);
					}
				break;
			}
			//same process for cosmetics 
			else if(s[0].c.getname()==Prodname)
			{
				s[i].c.display();
				cout<<"\t\t\tEnter Quantity to sell"<<endl;
				cin>>qty;
				total_price=s[i].c.getretail_price();
				total_price=total_price*qty;
				//s[i].sold_stock(qty,total_price);
				if(s[i].c.getquantity()==0)
				{
					cout<<"\t\t\tOut of Stock"<<endl;
					break;
				}
				prod_qty=s[i].c.getquantity();
				prod_qty=prod_qty-qty;
				s[i].c.setquantity(prod_qty);
				 decrmnt=s[i].getQuantity()-qty;
				s[i].setQuantity(decrmnt);	
				cout<<"\t\t\tPress 1 to Buy More\n\t\t\tPress 2 For Invoice"<<endl;
					cin>>more_or_invoice;
					if(more_or_invoice==1)
					{
						goto More;
					}
					else
					{
						invoice(s,i);
					}
				
				break;
			}
			else
			{
				cout<<"Not Avaiable in Stock"<<endl;
				break;
			}
		}
		
	}
	//this function will display all the data in the inventory .
	void pharmacy::display_all(soldstock s[],int size)
	{
		int show=0;
		cout<<"\t\t\t\tPress 1 to show All Medicines\n\t\t\t\tPress 2 to show All Cosmatics"<<endl;
		cin>>show;
	if(show==1)
	{
		 cout<<"=================================================================================================================================================================\n";
          cout<<"Batch No"<<setw(30)<<"Product Name"<<setw(30)<<"Quantity"<<setw(30)<<"Retail Price"<<setw(25)<<"Mfg Date"<<setw(30)<<"Exp Date"<<endl;
		  cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			for(int i=0;i<size;i++)
			{
				cout<<s[i].m.getBatch_no()<<setw(30)<<s[i].m.getname()<<setw(30)<<s[i].m.getquantity()<<setw(30)<<s[i].m.getretail_price()<<setw(30)<<s[i].m.getmanufact_date()<<setw(30)<<s[i].m.getexpire_date()<<endl;
				 cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
	}
	else if(show==2)
	{
		 cout<<"=====================================================================================================================================================\n";
		 cout<<"Batch No"<<setw(30)<<"Product Name"<<setw(30)<<"Quantity"<<setw(30)<<"Retail Price"<<setw(25)<<"Mfg Date"<<setw(30)<<"Exp Date"<<endl;
          for(int i=0;i<size;i++)
			{
				cout<<s[i].c.getBatch_no()<<setw(30)<<s[i].c.getname()<<setw(30)<<s[i].c.getquantity()<<setw(30)<<s[i].c.getretail_price()<<setw(30)<<s[i].c.getmanufact_date()<<setw(30)<<s[i].c.getexpire_date()<<endl;
				 cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			}
	}
	else
	{
		cout<<"\t\t\tInvalid Input"<<endl;
	}

	}
	//this function is used to display invoice 
	void pharmacy::invoice(soldstock s[],int size)
	{
		this->s=*s;
		int i=0;
		string date;
		cin.ignore();
		cout<<"Enter Date :"<<endl;
		getline(cin,date);
		system("cls");
		cout<<"\t\t\t\t\tINVOICE"<<endl;
		cout<<"Date :"<<date<<endl;
		 cout<<"======================================================================================================================================\n";
          cout<<"Batch No"<<setw(30)<<"Product Name"<<setw(30)<<"Quantity"<<setw(30)<<"Retail Price"<<setw(25)<<"Total Price"<<endl;
		 if(s[size].m.getname()=="")
		{
		
		 cout<<s[i].c.getBatch_no()<<setw(30)<<s[i].c.getname()<<setw(30)<<s[i].c.getquantity()<<setw(30)<<s[i].c.getretail_price()<<setw(30)<<total_price<<endl;
          cout<<"======================================================================================================================================\n";
		}
		  else
		  {
			 cout<<s[i].m.getBatch_no()<<setw(30)<<s[i].m.getname()<<setw(30)<<s[i].m.getquantity()<<setw(30)<<s[i].m.getretail_price()<<setw(30)<<total_price<<endl;
          cout<<"======================================================================================================================================\n";
		 }
		
	system("Pause");
	system("cls");
	}