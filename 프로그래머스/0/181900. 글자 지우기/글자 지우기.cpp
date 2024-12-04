#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    
    sort(indices.begin(), indices.end());
    for(int i = 0; i < indices.size(); i++)
    {
        my_string[indices[i]] = '*';
    }
    for(auto s : my_string)
    {
        if(s=='*') continue;
        else answer.push_back(s);
    }
    return answer;
}