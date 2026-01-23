#include <iostream>

using namespace std;

int memo[21][21][21];

int Recursive(int a, int b, int c)
{
    
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }
    
    if (a > 20 || b > 20 || c > 20)
    {
        return Recursive(20, 20, 20);
    }
    
    if (memo[a][b][c] != 0)
    {
        return memo[a][b][c];
    }
    
    if (a < b && b < c)
    {
        memo[a][b][c] = Recursive(a, b, c-1) + Recursive(a, b-1, c-1) - Recursive(a, b-1, c);
    }
    else
    {
        memo[a][b][c]= Recursive(a-1, b, c) + Recursive(a-1, b-1, c) + Recursive(a-1, b, c-1) - Recursive(a-1, b-1, c-1);
    }
   
    return memo[a][b][c];
}

int main() {
    int a, b, c;
    
    
    while (true)
    {
        if (!(cin>>a>>b>>c))
        {
            break;
        }
        
        if (a == -1 && b == -1 && c == -1)
        {
            break;
        }
        
        cout << "w(" << a << ", " << b << ", " << c << ") = " << Recursive(a, b, c) << "\n";
    }
    
  
    return 0;
}