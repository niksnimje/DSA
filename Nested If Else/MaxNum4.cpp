#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	cout <<"Enter Vlue Of a =>";
	cin>>a;
	cout <<"Enter Vlue Of b =>";
	cin>>b;
	cout <<"Enter Vlue Of c =>";
	cin>>c;
	cout <<"Enter Vlue Of d =>";
	cin>>d;
	
	
	if(a>b){
		if(a>c){
			cout <<"A Is Max";
		}
		else
		{
			cout <<"C Is Max";
		}
	}
	else
	{
		if(b>c){
			cout <<"B Is Max";
		}	
		else
		{
			cout <<"C Is Max";
		}
	}
	
	return 0;
}