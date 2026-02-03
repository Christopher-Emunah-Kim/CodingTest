#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <iostream>
#include <queue>

using namespace std;


class MyQueue
{
public:
    void Push(int x)
    {
        q.push(x);
    }
    
    int Pop()
    {
        if (Empty() == 1)
        {
            return -1;
        }
        
        int x = q.front();
        q.pop();
        return x;
    }
    
    int Size()
    {
        return static_cast<int>(q.size());
    }
    
    int Empty()
    {
        return q.empty()? 1 : 0;
    }
    
    int Front()
    {
        if (Empty() == 1)
        {
            return -1;
        }
        
        return q.front();
    }
    
    int Back()
    {
        if (Empty() == 1)
        {
            return -1;
        }
        
        return q.back();
    }
    
  
private:
    queue<int> q;
};

int main() {
    fastio()
    int size;
    cin >> size;
    MyQueue q;
    
    while (size--)
    {
        string cmd;
        cin >> cmd;
        
        if (cmd == "push")
        {
            int x;
            cin >> x;
            q.Push(x);
        }
        else if (cmd == "pop")
        {
            cout << q.Pop() << '\n';
        }
        else if (cmd == "size")
        {
            cout << q.Size() << '\n';
        }
        else if (cmd == "empty")
        {
            cout << q.Empty() << '\n';
        }
        else if (cmd == "front")
        {
            cout << q.Front() << '\n';
        }
        else if (cmd == "back")
        {
            cout << q.Back() << '\n';
        }
        
    }
    
    
  
    return 0;
}