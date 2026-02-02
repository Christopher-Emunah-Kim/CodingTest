#include <iostream>
#include <vector>

using namespace std;

class MyStack
{
public:
    void Push(int x)
    {
        stack.push_back(x);
    }
    
    
    int Size()
    {
        return static_cast<int>(stack.size());
    }
    
    bool Empty()
    {
        return stack.empty();
    }
    
    int Pop()
    {
        if (Empty())
        {
            return -1;
        }
        int temp = stack.back();
        stack.pop_back();
        return temp;
    }
    
    int Top()
    {
        if (Empty())
        {
            return -1;
        }
        return stack.back();
    }
    
    
private:
    vector<int> stack;
};

void HandleInput(MyStack& stack, const string& input);

int main() {
    int size;
    cin >> size;
    MyStack stack;
    
    for (int i = 0; i < size; i++)
    {
        string input;
        cin >> input;
        HandleInput(stack, input);
    }
    
  
    return 0;
}

void HandleInput(MyStack& stack, const string& input) 
{
    if (input == "push")
    {
        int i;
        cin >> i;
        stack.Push(i);
    }
    else if (input == "top")
    {
        cout << stack.Top() << '\n';
    }
    else if (input == "pop")
    {
        cout << stack.Pop() << '\n';
    }
    else if (input == "empty")
    {
        if (stack.Empty())
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    else if (input == "size")
    {
        cout << stack.Size() << '\n';
    }
}