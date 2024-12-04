#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long i = num;
    if(i == 1) return answer;
    else
    {
        while(i != 1)
        {
            if(i%2==0)
            {
                i /= 2; 
                answer++;
            }
            else 
            {
                i = (i*3) +1; 
                answer++;
            }
        }
    }
    
    if(answer >= 500) return -1;

    
    return answer;
}