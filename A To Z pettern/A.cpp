#include<iostream>
using namespace std;

int main()
{
	int total;
	int arr[5]={1,2,3,4,5};
	for (int i=0; i<=4; i++)
	{
		cout << "Enter Arr ["<<i<< "] : ";
		cin >> arr [i];
	}
	for(int i=0; i<=4; i++)
	{
		total=total+arr[i];
	}
	cout << "Total Sum Of all elemte's : "<<total ;
}