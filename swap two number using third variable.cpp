/* write a c++ program on swapping two numbers using third variable*/
#include<iostream>

using namespace std;

int main()
{
	int a,b,temp;
	cout<<"enter the values a and b: ";
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<a;
	cout<<b;
}
