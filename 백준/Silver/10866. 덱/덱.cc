#include <iostream>
#include <queue>

using namespace std;

constexpr int MAX_SIZE = 10005;

class MyDeque
{
public:
    void push_front(int x)
    {
       head = (head-1 + MAX_SIZE) % MAX_SIZE;
       deque[head] = x;
    }
    
    void push_back(int x)
    {
        deque[tail] = x;
        tail = (tail + 1) % MAX_SIZE;
    }
    
    int pop_front()
    {
        if (empty())
        {
            return -1;
        }
        
        int val = deque[head];
        head = (head + 1) % MAX_SIZE;
        return val;
    }
    
    int pop_back()
    {
        if (empty())
        {
            return -1;
        }
        
        tail = (tail - 1 + MAX_SIZE) % MAX_SIZE;
        return deque[tail];
        
    }
    
    int size()
    {
        return (tail-head + MAX_SIZE) % MAX_SIZE;
    }
    
    int empty()
    {
        return head == tail? 1 : 0;
    }
    
    int front()
    {
        if (empty())
        {
            return -1;
        }
        return deque[head];
    }
    
    int back()
    {
        if (empty())
        {
            return -1;
        }
        return deque[(tail-1 + MAX_SIZE) % MAX_SIZE];
    }
    
private:
    int head = 0;
    int tail = 0;
    int deque[MAX_SIZE];
    
};


int main() {
    int size;
    cin >> size;
    MyDeque deque;
    
    while (size--)
    {
        string cmd;
        cin >> cmd;
        
        if (cmd == "push_back")
        {
            int x;
            cin >> x;
            deque.push_back(x);
        }
        else if (cmd == "push_front")
        {
            int x;
            cin >> x;
            deque.push_front(x);
        }
        else if (cmd == "pop_front")
        {
            int x = deque.pop_front();
            cout << x << '\n';
        }
        else if (cmd == "pop_back")
        {
            int x = deque.pop_back();
            cout << x << '\n';
        }
        else if (cmd == "empty")
        {
            int x = deque.empty();
            cout << x << '\n';
        }
        else if (cmd == "size")
        {
            int size = deque.size();
            cout << size << '\n';
        }
        else if (cmd == "front")
        {
            int x = deque.front();
            cout << x << '\n';
        }
        else if (cmd == "back")
        {
            int x = deque.back();
            cout << x << '\n';
        }
    }
    
  
    return 0;
}
