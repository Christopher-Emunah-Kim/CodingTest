#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
   
    //장군개미 처리
    while(hp>4)
    {
        answer+= hp/5;
        hp -= 5 * (hp/5);
    }
    
    //병정개미 처리
    int r = hp % 5;
    if(r == 4 || r == 2) answer +=2;
    if(r == 3 || r == 1) answer +=1;

    
    return answer;
}