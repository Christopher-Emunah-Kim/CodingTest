#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if(s.size() == 4 || s.size() == 6)
    {
        for(auto c : s)
        {
            if(c - '0' >= 0 && c - '0' <= 9) continue;
            else answer = false;
        }
    }
    else answer = false;
    
    return answer;
}