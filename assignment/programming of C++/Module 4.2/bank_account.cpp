#include<iostream>
#include<string>
using namespace std;

class bank{
	public:
		string name;
		int accountnum;
		char accounttype[20];
		int balance;
		
	 void input()
	 {
	 	cout<<"Name of the depositor :";
	 	getline(cin, name);
	 	cout<<"Account Number :";
	 	cin>>accountnum;
	 	cout<<"Type of Account :";
	 	fflush(stdin);
	 	gets(accounttype);
	 	cout<<"Balance amount in account :";
	 	cin>>balance;
	 }
	 
	 void deposit()
	 {
	 	int amt;
	 	cout<<"\nEnter the deposite :";
	 	cin>>amt;
	 	balance+=amt;
	 	
	 	cout<<"Amount deposited successfuly"<<endl;
	 	cout<<"Your balance :"<<balance<<endl;
	 }
	 
	 void withdraw()
	 {
	 	int amt;
	 	cout<<"\nEnter amount to withdraw :";
	 	cin>>amt;
	 	if(amt<=balance)
	 	{
	 		balance-=amt;
	 		cout<<"\nRemaining balance :"<<balance<<endl;
		 }
		 else
		 {
		 	cout<<"You have insufficient balance !!"<<endl;
		 	exit(0);
		 }
	 }
	 
	 void display()
	 {
	 	cout<<"\nname :"<<name<<endl;
	 	cout<<"Current balance :"<<balance;
	 }
	 
	 
};

int main()
{
	bank b1;
	b1.input();
	b1.deposit();
	b1.withdraw();
	b1.display();
}
