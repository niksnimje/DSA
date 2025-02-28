#include <iostream>
using namespace std;


void Sum(int n){
	int total;
	cout << "Enter Number : ";
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		total=total+i;
	}
	cout <<"The Vlue Of Sum Is = " <<total;
}

int main() {
    
  	Sum(0);

    return 0;
}