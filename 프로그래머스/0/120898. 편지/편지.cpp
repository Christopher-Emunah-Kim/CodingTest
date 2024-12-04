#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;
    
    for(auto s : message)
    {
        answer += 2;
    }
    
    return answer;
}