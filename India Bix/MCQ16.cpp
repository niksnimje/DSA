#include<iostream>
using namespace std;

int main(){

	//	 80, 10, 70, 15, 60, ...
	
	int start=80;
    int start2=10;
    
    for( int i=1; i<=6; i++){

        cout  << start <<  " " << start2 << " ";

        start-=10;

        start2+=5;

    }


    return 0;

}