#include<iostream>
using namespace std;

int main(){

	//	 31, 29, 24, 22, 17, ...
	
	 int start=31;
    
    for( int i=1; i<=6; i++){

        cout  << start <<  " " ;

        start-=2;

        cout << start << " ";
        start-=5;

       
    }

    return 0;

}