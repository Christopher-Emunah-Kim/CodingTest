#include <iostream>
#include <stack>

using namespace std;

int main() {
    int size;
    cin >>size;
    while (size--)
    {
        string s;
        cin >> s;
        stack<char> st;
        bool isValid = true;

        for (char c : s) 
        {
            if (c == '(') 
            {
                st.push(c); 
            } 
            else 
            {
                // 닫힌 괄호를 만났는데 스택이 비어있으면 짝이 안 맞음
                if (st.empty()) 
                {
                    isValid = false;
                    break;
                }
                
                st.pop(); // 짝을 찾았으므로 가장 최근의 '(' 제거
            }
        }

        // 최종적으로 스택이 비어있어야 모든 짝이 맞는 것
        if (isValid && st.empty()) 
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
    }
    
    
  
    return 0;
}