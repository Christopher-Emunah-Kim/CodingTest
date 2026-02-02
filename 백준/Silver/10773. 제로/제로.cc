#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> stack;
    int k;
    if (!(cin >> k))
    {
        return 0;
    }
    for (int i = 0; i < k; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 0 && !stack.empty())
        {
           stack.pop_back();            
        }
        else
        {
            stack.push_back(tmp);
        }
    }
    
    long long count = 0;
    for (auto i : stack)
    {
        count += i;
    }
    cout << count << '\n';
  
    return 0;
}