#include <iostream>
using namespace std;

int main() {
	
	// 36, 34, 30, 28, 24, ...
	
    int start = 36;

    for (int i = 0; i <=10; i++) {
        cout << start << " ";
        if (i % 2 == 0) {
            start -= 2;
        } else {
            start -= 4;
        }
    }
    
    return 0;
}
