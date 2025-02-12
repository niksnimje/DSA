#include<iostream>
using namespace std;

int main(){

	//	 8, 22, 8, 28, 8, ...
	
	 int start=22;
    
        for( int i=1; i<=6; i++){

            cout << "8 " << start << " ";

            start+=6;
        }
        

    return 0;

}