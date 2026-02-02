#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    while (true)
    {
        string s;
        
        getline(cin,s);
        
        if (s == ".")
        {
            break;
        }
        
        stack<char> check;
        bool IsValid = true;
        
        for (char c : s)
        {
            if (c == '.')
            {
                break;
            }
            
            if (c == '[' || c == '(')
            {
                check.push(c);
            }
            else if (c == ']')
            {
                if (check.empty() || check.top() != '[')
                {
                    IsValid = false;
                    break;
                }
                
                check.pop();
            }
            else if (c == ')')
            {
                if (check.empty() || check.top() != '(')
                {
                    IsValid = false;
                    break;
                }
                
                check.pop();
            }
        }
        
        if (IsValid && check.empty() )
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    
  
    return 0;
}