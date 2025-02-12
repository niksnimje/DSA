#include<iostream>
using namespace std;

int main(){

	//	 544, 509, 474, 439, ...
	
	int start=544;
    
    for( int i=1; i<=6; i++){

        cout  << start <<  " " ;

        start-=35;
        
    }
 
 
    return 0;

}