#include<iostream>
using namespace std;

int main(){

//        1
//      1 0
//    1 0 1
//  1 0 1 0
//1 0 1 0 1


	 for(int i=1; i<=5; i++){
	    	for(int k=5; k>i; k--){
	    		cout << "  ";
			}
	        for(int j=1; j<=i; j++)
	        {
	            if(j%2==0)
				{
					cout<< "0 ";
				}
				else
				{
					cout<< "1 ";
				}
	        }
	        cout << endl;
	    }

	return 0;
}
