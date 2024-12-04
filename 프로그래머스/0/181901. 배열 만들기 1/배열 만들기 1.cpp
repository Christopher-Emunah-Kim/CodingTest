#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    
    for(int i = 1; i < n+1; i++)
    {
        if(i % k == 0)
        {
            answer.push_back(i);
        }
        else
            continue;
    }
    
    return answer;
}