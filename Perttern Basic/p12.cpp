#include<iostream>
using namespace std;

int main(){

    // 5 5 5 5 5
    // 4 4 4 4
    // 3 3 3
    // 2 2
    // 1

    for(int i=5; i>=1; i--){
		for(int j=i; j>=1; j--)
		{
			cout << i << " ";
		}
		cout << endl;
	}
    
}