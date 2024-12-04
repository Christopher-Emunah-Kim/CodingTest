#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    unordered_map<int, int> SizeMap;
    for(auto s : strArr)
    {
        SizeMap[s.size()]++;
    }
    
    for(auto pair : SizeMap)
    {
        answer = max(answer, pair.second);
    }
    
    return answer;
}