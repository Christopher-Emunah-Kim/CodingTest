#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    for(const auto& c : arr)
    {
        if(k % 2 == 0) answer.push_back(c + k);
        else    answer.push_back(c * k);
    }
    
    return answer;
}