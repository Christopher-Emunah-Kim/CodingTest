#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    if(num_list.size() >= 11)
    {
        for(int ans : num_list)
        {
            answer += ans;
        }
    }
    else if(num_list.size() <= 10)
    {
        answer = 1;
        for(int ans : num_list)
        {
            answer *= ans;
        }
    }
    
    return answer;
}