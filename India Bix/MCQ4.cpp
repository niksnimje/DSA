#include<iostream>
using namespace std;

int main(){
	//	 22, 21, 23, 22, 24, 23, ...
	
	int start=22;
	int secound=21;
	
	for(int i=1; i<=5; i++ ){
		
		cout << start << " " << secound << " ";
		
		start++;
		secound++;
		
	}
}