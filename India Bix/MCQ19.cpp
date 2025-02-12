#include<iostream>
using namespace std;

int main(){

	//	 8, 6, 9, 23, 87 , ...

	int start=8;
    int index=2;
     
    
    for( int i=1; i<=6; i++){
        cout  << start <<  " ";
        start*=i;

        start-=index;

        index++;
        
    }

    return 0;

}