#include <iostream> 

using namespace std;


int factorial(int num) {
   int total=1;
   for(int i=num; i>=1; i--)
	{
		total = total*i;
	}

    cout <<"factorial is = "<< total;
}

int main() {
    int number;
    
    cout << "Enter a number to find factorial: ";
    cin >> number;
    
	factorial(number);
	
    return 0;
}