#include<iostream>
using namespace std;

class student{
	public:
		int rollno;
		
		void getinput()
		{
			cout<<"Enter the roll.no :";
			cin>>rollno;
		}
		
		void getdisplay()
		{
			cout<<"\n----Data----"<<endl;
			cout<<"student roll.no is :"<<rollno<<endl;
		}
		
};

class test : public student{
	public:
		int subm1,subm2;
		
		void input()
		{
			cout<<"Enter the first subject marks :";
			cin>>subm1;
			cout<<"Enter the second subject marks :";
			cin>>subm2;
		}
		
		void display()
		{
			cout<<"first subject mark is :"<<subm1<<endl;
			cout<<"second subject mark is :"<<subm2<<endl;
		}
};

class result : public test{
	public:
		int tmarks;
		
		void totalmarks()
	     {
	     	tmarks=subm1+subm2;
	     	cout<<"total marks is :"<<tmarks<<endl;
		 }
};

int main()
{
	result r1;
	r1.getinput();
	r1.input();
	r1.getdisplay();
	r1.display();
	r1.totalmarks();
	return 0;
}
