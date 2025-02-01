// Swapping Without Using Temp veriable and + Or - 


#include<iostream>
using namespace std;

int main()
{
	int a=20;
	int b=10;
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	cout<<"A = "<<a<<endl<<"B = "<< b;
	
}