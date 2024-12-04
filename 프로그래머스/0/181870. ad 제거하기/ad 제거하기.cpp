#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(auto s : strArr)
    {
        if(s.find("ad") != -1) continue;
        else answer.push_back(s);
    }
    
    return answer;
}