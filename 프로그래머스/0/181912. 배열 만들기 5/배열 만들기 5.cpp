#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    vector<int> temp;
    for(int i = 0; i < intStrs.size(); i++)
    {
        temp.push_back(stoi(intStrs[i].substr(s, l)));
    }
    
    for(auto ik : temp)
    {
        if(ik > k) answer.push_back(ik);
    }
    
    return answer;
}