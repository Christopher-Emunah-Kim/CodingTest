#include <iostream>

using namespace std;

int main() {
    
    int time;
    if (!(cin>>time))
        return 0;
    
    for (int i = 0; i < time; i++)
    {
        string target;
        cin >> target;
        if (target.empty())
            continue;
        
        char begin = target.front();
        char end = target.back();
        cout << begin << end << "\n";
    }
    
    return 0;
}