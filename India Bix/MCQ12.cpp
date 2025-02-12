#include<iostream>
using namespace std;

int main(){

	//	 14, 28, 20, 40, 32, 64, ... 
	
	float start=14;
    
    for( int i=1; i<=6; i++){
        cout  << start <<  " " ;

        start*=2;
        
        cout  << start <<  " " ;

        start-=8;
    }
 
    return 0;

}