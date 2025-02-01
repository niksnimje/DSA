#include<iostream>
using namespace std;

int main()
{
	int num;
	cout <<"Enter Your num =>";
	
	cin>>num;
	
	
	if(num==0){
		cout<<"Your Number is NEUTRAL ";
	}
	else if(num<0){
		cout<<"Your Number is NEGATIVE ";
	}
	else
	{
		cout<<"Your Number is POSITIVE";
	}
	
	return 0;
	
}