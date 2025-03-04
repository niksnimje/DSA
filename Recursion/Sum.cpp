#include <iostream>
using namespace std;


int sum(int n) {
	int vlaue;
	if(n==0)
	{
		return 0;
	} 
    return n + sum(n - 1);
}

int main() {
    int n,result;
    cout << "Enter a number: ";
    cin >> n;

    result = sum(n);
    cout << "sum Is = " << result;
    cout << endl;

    return 0;
}