#include <string>
#include <vector>

using namespace std;

//약수갯수구하기
int divisor (int n){
    vector<int> temp;
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0) temp.push_back(i);
    }
    temp.push_back(n);
    return temp.size();
}

int solution(int left, int right) {
    int answer = 0;
    
    for(int i = left; i <= right; i++)
    {
        if(divisor(i) % 2 == 0) answer += i;
        else answer -= i;
    }
    
    return answer;
}