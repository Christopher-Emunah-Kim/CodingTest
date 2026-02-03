#include <iostream>
#include <queue>

using namespace std;

void HandleQueue(queue<int>& q);

int main() {
    int target;
    cin >> target;
    queue<int> q;
    
    for (int i = 1; i <= target; i++)
    {
        q.push(i);
    }
    
    HandleQueue(q);
    
    cout << q.front() << '\n';
  
    return 0;
}

void HandleQueue(queue<int>& q)
{
    while (q.size() != 1)
    {
        q.pop();
        int temp = q.front();
        q.pop();
        
        q.push(temp);
    }
}