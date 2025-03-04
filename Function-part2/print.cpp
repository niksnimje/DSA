#include <iostream>
using namespace std;


void print1ToN(int n) {
	if(n==0) return;
    print1ToN(n - 1);   
    cout << n << " ";   
}

void printNTo1(int n) {
	if(n==0) return;
    cout << n << " "; 
    printNTo1(n - 1); 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "1 to " << n << " = ";
    print1ToN(n);
    cout << endl;

    cout << n << " to 1 = ";
    printNTo1(n);
    cout << endl;

    return 0;
}