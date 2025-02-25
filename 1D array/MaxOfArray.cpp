#include<iostream>
using namespace std;

int main()
{
    int a[5]={1,2,45,88,5};
    int max=a[0];
        for(int i=0; i<5; i++)
        {
            if(max<a[i])
        {
            max=a[i];
        }
    }
    cout << max;
}