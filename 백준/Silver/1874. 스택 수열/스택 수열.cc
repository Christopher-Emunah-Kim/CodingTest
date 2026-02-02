#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int size;
    cin >> size;
    stack<int> stack;
    vector<char> result;
    
    
    int current = 1;
    for (int i = 0; i < size; i++)
    {
        int next;
        cin >> next;
        
        //스택에 다음 next에 해당하는 값까지 넣기
        while (current <= next)
        {
            stack.push(current);
            result.push_back('+');
            current++;
        }
        
        
        if (!stack.empty() && stack.top() == next)
        {
            stack.pop();
            result.push_back('-');
        }
        else
        {
            //top이 next와 같지않다면.
            cout << "NO\n";
            return 0;
        }
    }
    
    for (char c : result)
    {
        cout << c << '\n';
    }
    
    
  
    return 0;
}
