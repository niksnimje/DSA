#include<iostream>
using namespace std;

int main()
{
	int age;
	cout <<"Enter Your age =>";
	
	cin>>age;
	
	if(age<=0){
		cout<<"Please Enter vailid Age";
	}
	else if(age<18){
		cout<<"You are Not ELIGIBIL  for voite";
	}
	else if(age>=100){
		cout<<"Please Enter vailid Age";
	}
	else
	{
		cout<<"You are ELIGIBIL  for voite";
	}
	
	return 0;
}