#include <iostream> 
using namespace std;


int main() {
	
    int arr[3][3]={{10,20,30},{40,50,60},{67,8,4}};
    int boundarySum  = 0;

    
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout << "Enter Vlue ["<< i <<"]["<< j << "]: ";
		   	cin >> arr[i][j];
		}	
		cout << endl;
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if (i == 0 || i == 2 || j == 0 || j == 2) {
                boundarySum =boundarySum + arr[i][j];
            }
		}	
		cout << endl;
	}
	
	
	cout << endl;
	cout << "The diagonal Sum of this array = " << boundarySum <<endl;
	
    return 0;
}