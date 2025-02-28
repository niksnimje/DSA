#include <iostream> 

using namespace std;


int Table(int num) {

	
    for (int i = 1; i <= num; i++) {
    	cout << "Table of " << i << ":" << endl;
    	for(int j=1; j<=10; j++)
    	{
    		cout << j << " x " << i << " = " << j * i << endl;
		}
       cout << endl;
    }
    
}

int main() {
    int number;
    
    cout << "Enter a number to Print Table : ";
    cin >> number;
    
	Table(number);
	
    return 0;
}