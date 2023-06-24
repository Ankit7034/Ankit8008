#include<iostream>
using namespace std;

//swap two numbers without using third variable friends function.

class Num{
	private:
		int a,b;
		
	public:
		void input()
		{
			cout<<"Enter Value of a : ";
			cin>>a;
			cout<<"Enter Value of b : ";
			cin>>b;
		}
		friend void swap(Num &o1);
};

void swap(Num &o1)
{	
    cout<<endl<<"before Swapping Value of a : "<<o1.a<<endl;
	cout<<"before Swapping Value of b : "<<o1.b<<endl;
	
	o1.a=o1.a+o1.b;
	o1.b=o1.a-o1.b;
	o1.a=o1.a-o1.b;
	
	cout<<endl<<"\nAfter Swapping Value of a : "<<o1.a<<endl;
	cout<<"After Swapping Value of b : "<<o1.b;
}

int main()
{
	Num n1;
	
	n1.input();
	swap(n1);
	
	
	
	return 0;
}
