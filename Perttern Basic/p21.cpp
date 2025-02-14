#include<iostream>
using namespace std;

int main(){

//A
//A B
//A B C
//A B C D
//A B C D E
	
	
        char alpha='A';

        for(int i=1; i<=5; i++){
                for(int j=1; j<=i; j++)
                {
                    cout << alpha << " ";
                    alpha++;
                }
                alpha='A';
                cout << endl;
            }
}