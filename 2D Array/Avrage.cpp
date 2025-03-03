#include <iostream> 

using namespace std;


int main() {
	
    int arr[3][4]={{10,20,30},{40,50,60},{67,8,4,8}};
    int sum=0;
    
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout << "Enter Vlue ["<< i <<"]["<< j << "]: ";
		   	cin >> arr[i][j];
		}	
		cout << endl;
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout << arr[i][j]<< " " ;
			sum=sum+arr[i][j] ;
		}	
		cout << endl;
	}
	cout << endl;
	cout << "The Sum of this array All  elemnet is = " << sum <<endl;
	cout << "The average of this array is = " <<sum/12 ;
	
    return 0;
}