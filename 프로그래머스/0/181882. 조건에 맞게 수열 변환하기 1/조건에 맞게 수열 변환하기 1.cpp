#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(auto ans : arr)
    {
        if(ans >= 50 && ans % 2 == 0)
        {
            answer.push_back(ans/2);
        }
        else if(ans < 50 && ans % 2 == 1)
        {
            answer.push_back(ans*2);
        }
        else
            answer.push_back(ans);
    }
    
    
    
    return answer;
}