#include<iostream>
using namespace std;

int main()
{
	int arr[5]={1,2,3,4,5};
	for (int i=0; i<=4; i++)
	{
		cout << "Enter Arr ["<<i<< "] : ";
		cin >> arr [i];
	}
	for(int i=0; i<=4; i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i] <<endl;
		}
	}
}