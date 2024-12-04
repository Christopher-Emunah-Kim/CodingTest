#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> temp;
    for(auto c: s)
    {
        temp.push_back(c);
    }
    sort(temp.rbegin(), temp.rend());
    
    for(auto i : temp)
    {
        answer += i;
    }
    
    return answer;
}