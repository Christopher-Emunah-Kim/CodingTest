#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    float E = (float)(n % 2);
    
    if(0 == E)
    {
	    cout << n << " is even";
    }
    else
    {
	    cout << n << " is odd";
    }
    
    return 0;
}