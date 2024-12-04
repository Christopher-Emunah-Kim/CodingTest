#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    
    if(x1 || x2)
    {
        if(x3) return true;
        else if(x4) return true;
        else return false;
    }
    else return false;
    
    
    return answer;
}