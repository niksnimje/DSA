#include <iostream> 

using namespace std;


int isPrime(int num) {
   int count=0;
   
   for(int i=1; i<=num; i++)
	{
		
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout << "This Is Prime Number";
	}
	else
	{
		cout << "This Is Not A Prime Number";
	}
}

int main() {
    int number;
    
    cout << "Enter a number to find Prime: ";
    cin >> number;
    
	isPrime(number);
	
    return 0;
}