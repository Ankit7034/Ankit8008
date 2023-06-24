#include<iostream>
using namespace std;

class person{
	public:
		string name;
		int age;
		
		void getinput()
		{
			cout<<"<---Student input--->"<<endl;
			cout<<"Student Name :";
			getline(cin, name);
			cout<<"Student Age :";
			cin>>age;
		}
		
		void getdisplay()
		{
			cout<<"\n<---Student output--->"<<endl;
			cout<<"Name :"<<name<<endl;
			cout<<"Age :"<<age<<endl;
		}

};

class student :public person{
	public:
		int per;
		
		void input()
		{
			cout<<"Percentage :";
			cin>>per;
		}
		
		void display()
		{
			cout<<"The percentage is :"<<per<<"%"<<endl;
		}
};

class teacher :public person{
	public:
		int salary,age;
		string name;
		void input()
		{
			cout<<"<---Teacher input--->"<<endl;
			cout<<"Teacher Name :";
			fflush(stdin);
			getline(cin, name);
			cout<<"Teacher Age :";
			cin>>age;
			cout<<"Salary :";
			cin>>salary;
		}
		
        void display()
        {
        	cout<<"\n<---Teacher output--->"<<endl;
        	cout<<"Name :"<<name<<endl;
			cout<<"Age :"<<age<<endl;
			cout<<"Salary :"<<salary<<endl;
		}
};

int main()
{
	student s1;
	teacher t1;
	
	s1.getinput();
	s1.input();
	t1.input();
	
	s1.getdisplay();
	s1.display();
	t1.display();
}
