#include<iostream>
using namespace std;

int main(){

//0
//0 1
//0 1 0
//0 1 0 1
//0 1 0 1 0

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++)
        {
            
            if (j%2==1) 
            {
                cout << "0 ";
            } 
            else 
            {
                cout << "1 ";
            }
        
        }
        cout << endl;
    }

}