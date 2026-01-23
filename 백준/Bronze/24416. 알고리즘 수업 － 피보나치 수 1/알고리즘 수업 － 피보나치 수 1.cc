#include <iostream>
using namespace std;

//피보나치수 재귀호출 코드
int Fib(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
        return Fib(num-1) + Fib(num-2);
    }
}


//피보나치수 동적 프로그래밍 코드
int Fibonacci(int num)
{
    int arr[45];
    arr[1] = 1;
    arr[2] = 1;
    int count = 0;
    
    for (int i = 3; i <= num; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        count++;
    }
    return count;
}



int main() {
    int num;
    if (!(cin >> num))
    {
        return 0;
    }
    
    int cnt1 = Fib(num);
    int cnt2 = Fibonacci(num);
    
    cout << cnt1 << " " << cnt2 << "\n";
    
    
    return 0;
}