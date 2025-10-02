#include <iostream>

using namespace std;

//피보나치 수
int memoize[50] = { 0, 1, 1 };

int Fibonacci(int n)
{
    if(n<=2)
		return memoize[n];

    if (memoize[n] != 0 ) 
        return memoize[n];

    memoize[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
	return memoize[n];
}


int main()
{
    int n;
    cin >> n;
	cout << Fibonacci(n) << endl;
    

    return 0;
}