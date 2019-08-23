
///W.A.P THAT IMPLEMENT BANKING SYSTEM?


#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>

class account
{

private:
	double balance,rate;
public:
	account()
	{
		cout<<"enter the intial balance";
		cin>>balance;
		cout<<"enter the interest rate";
		cin>> rate;
		
	}
	
	void deposit()
	{
		double amount;
		cout<<"\n enter the amount:";
		cin>>amount;
		balance= balance+amount;
		
	}
	void withdraw()
	{
		double amount;
		cout<<"how much amount to withdraw";
		cin>> amount;
	
	if(amount>balance)
	{
		cout<<"\n Available balance is not sufficient";	
	}
	else{
		balance= balance - amount;
		cout<<"\n withdraw amount ="<<amount;
		cout<<"\n current balance ="<<balance;
		
	    }
    }
    void compound()
    {
    	double interest;
    	interest = balance*rate/100;
    	balance = balance+ interest;
    	cout<<"\n interest balance="<<balance;
    	
	}
	void get_balance()
	{
		cout<<"current balance ="<<balance;
	}
	
};
	
	
	
	
	
	main()
	{
		account obj;
		int choice;
		while(1)
		{
			cout<<"\n -- main menu";
			cout<<"1.deposit";
			cout<<"2.withdraw";
			cout<<"3.compound";
			cout<<"4.get balance";
			cout<<"5.exit";					
     		cout<<"\n enter your choice(1-5):";
     		cin>>choice;
     		switch(choice)
     		{
     			
     			case 1:
     				obj.deposit();
     				break;
     			case 2:
				 obj.withdraw();
				 break;
			 	case 3:
     				obj.compound();
     				break;
				case 4:
     				obj.get_balance();
     				break;	
     				
     		    case 5:
				   exit(0);		
			 }
		}
	}

