#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for(auto ss1 : s1)
    {
        for(auto ss2 : s2 )
        {
            if(ss1 == ss2) answer++;
        }
    }
    
    
    return answer;
}