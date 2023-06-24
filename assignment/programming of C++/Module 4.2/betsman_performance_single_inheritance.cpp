#include<iostream>
using namespace std;

class cricketer{
	public:
	    string name;
	    
	    void getinput()
	    {
	    	cout<<"Enter the name :";
	    	getline(cin, name);
		}
	    
};

class batsman :public cricketer{
	public:
		int totalrun;
		double avg,nm;
		int bestperformance;
		
		void input()
		{
			cout<<"Enter total runs :";
			cin>>totalrun;
			cout<<"Enter best performance :";
			cin>>bestperformance;
			cout<<"no.match played :";
			cin>>nm;
			
			avg = totalrun/nm; 
		}
		
		void display()
		{
			cout<<"\n\nPlayer name :"<<name<<endl;
			cout<<"Player total runs :"<<totalrun<<endl;
			cout<<"Player Avg runs :"<<avg<<endl;
			cout<<"Player best performance :"<<bestperformance<<endl;
		}
};

int main()
{
	batsman b1;
	b1.getinput();
	b1.input();
	b1.display();
	return 0;
}
