#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> temp;
    
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0) temp.push_back(i);
    }
    temp.push_back(n);
    
    for(int j : temp)
    {
        answer += j;
    }
    
    return answer;
}