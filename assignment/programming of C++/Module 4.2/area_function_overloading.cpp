#include<iostream>
using namespace std;

//find area of rectangle triangle and circle using function overloading.

class Area{
	public:
		float are(float l,float b)
		{
			return l*b;
		}
		
		double are(double h,double bh)
		{
			return (h*bh)/2;
		}
		
		float are(float r) 
		{
			return 3.14*r*r;
		}
};

int main()
{
	Area a;
	
	float r,l,b;
	double h,bh;
	
	cout<<"------Area_of_Rectangle-------"<<endl;
	
	cout<<"Enter Length of Rectangle : ";
	cin>>l;
			
	cout<<"Enter Breadth of Rectangle : ";
	cin>>b;
	
	cout<<endl<<"Area of Rectangle is : "<<a.are(l,b)<<endl;
	
	cout<<endl<<"------Area_of_Triangle-------"<<endl;
	
	cout<<"Enter Hight of Triangle : ";
	cin>>h;
			
	cout<<"Enter Base of Triangle : ";
	cin>>bh;
			
	cout<<endl<<"Area of Triangle is : "<<a.are(h,bh)<<endl;
	
	cout<<endl<<"------Area_of_Circle-------"<<endl;
	
	cout<<"Enter Redius of Circle : ";
	cin>>r;
			
	cout<<endl<<"Area of Circle is : "<<a.are(r)<<endl;
	

	
	return 0;
}
