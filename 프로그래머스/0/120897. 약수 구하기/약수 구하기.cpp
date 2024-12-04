#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    vector<int> temp;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            temp.push_back(i);
            temp.push_back(n/i);
        }
    }
    for(auto j : temp)
    {
        if(find(answer.begin(), answer.end(), j) == answer.end())
            answer.push_back(j);
    }
    sort(answer.begin(), answer.end());
    
    
    return answer;
}