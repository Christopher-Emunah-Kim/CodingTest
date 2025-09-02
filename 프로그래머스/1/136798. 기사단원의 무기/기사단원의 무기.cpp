#include <string>
#include <vector>
#include <cmath>

using namespace std;

//약수를 구하기 위한 함수
int GetDivisorCount(int obj)
{
    int cnt = 0;
    int sqrtVal = sqrt(obj);

    for(int i = 1; i <= sqrtVal; ++i)
    {
        if(obj % i == 0)
        {
            cnt += 2; 

            if(i == obj / i) 
                cnt--;
        }
    }

    return cnt;
}


int solution(int number, int limit, int power) {
    int answer = 0;
    
    //number를 돌면서
    //각 약수의 갯수를 구하고
    //갯수가 limit을 넘기면
    //power를 더하고
    //안넘으면
    //그 갯수를 더함.
    
    for(int i = 1; i <= number; ++i)
    {
        int pow = GetDivisorCount(i);
        
        if (pow > limit) 
        {
            answer += power;
        } 
        else 
        {
            answer += pow;
        }
    }
    
    
    
    return answer;
}