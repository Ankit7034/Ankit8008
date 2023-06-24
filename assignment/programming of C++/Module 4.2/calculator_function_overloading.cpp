#include<iostream>
using namespace std;

class cal{
	public:
		
		int add(int num1, int num2)
		{
			return num1+num2;
		}
		
		int sub(int num1, int num2)
		{
			return num1-num2;
		}
		
		float mul(float num1,float num2)
		{
			return num1*num2;
		}
		
		float div(float num1,float num2)
		{
			if(num2==0)
			{
				cout<<"divide by zero"<<endl;	
				
			}
				return num1/num2;
			
		}
};

int main()
{
	cal c1;
	cout<<"The addition is :"<<c1.add(20,13)<<endl;
	cout<<"The substraction is :"<<c1.sub(33,21)<<endl;
	cout<<"The multiplication is :"<<c1.mul(5,4)<<endl;
	cout<<"The divition is :"<<c1.div(20,5)<<endl;
}
