#include<iostream>
using namespace std;

int main(){
	//	 53, 53, 40, 40, 27, 27, ...
	
	int start=53;

	for(int i=1; i<=5; i++ ){
		
		cout << start << " " << start << " ";
		
		start-=13;
		
	}
}