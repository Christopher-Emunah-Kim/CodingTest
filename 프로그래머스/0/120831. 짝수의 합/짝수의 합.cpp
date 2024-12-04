#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int a = n / 2;
    for(int i = 0; i < a+1; i++)
    {
        answer += 2*i;
    }
    
    return answer;
}