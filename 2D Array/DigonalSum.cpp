#include <iostream> 
using namespace std;


int main() {
	
    int arr[3][3]={{10,20,30},{40,50,60},{67,8,4}};
    int diagonal = 0;
    int antiDiagonal = 0;
    
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
		diagonal=diagonal+arr[i][i];
		antiDiagonal=antiDiagonal+arr[i][3-1-i];
	}
	cout << endl;
	cout << "The diagonal Sum of this array = " << diagonal <<endl;
	cout << "The antiDiagonal Sum of this array = " << antiDiagonal <<endl;
	
    return 0;
}