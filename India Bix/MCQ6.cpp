#include<iostream>
using namespace std;

int main(){
	//	 21, 9, 21, 11, 21, 13, 21, ... 
	
	int start=9;

    for( int i=0; i<=5; i++ ){
        cout << "21 " << start << " ";
        start+=2;
    }

    return 0;

}