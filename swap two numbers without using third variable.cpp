/* write a c++ program on swapping on two numbers without using third variable*/
#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"enter the values a and b:";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a;
	cout<<b;
}
