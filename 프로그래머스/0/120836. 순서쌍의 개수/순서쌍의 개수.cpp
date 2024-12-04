#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    //약수 구하기?
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0) answer++;
    }
    answer++;
    
    return answer;
}