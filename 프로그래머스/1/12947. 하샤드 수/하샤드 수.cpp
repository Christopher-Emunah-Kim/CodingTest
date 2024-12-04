#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    
    int sum =0;
    string str = to_string(x);
    for(auto s : str)
    {
        sum += s-'0';
    }
    if(x % sum == 0) answer = true;
    
    return answer;
}