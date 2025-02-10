#include<iostream>
using namespace std;

int main(){
	//	2, 1, (1/2), (1/4), ... 
	
	int start=2;
	cout << start << " ";
	start/=2;
	
	cout << start << " ";
	for(int i=1; i<=5; i++ ){
		
		cout << "1/" << start << " ";
		
		start*=2;
		
	}
}