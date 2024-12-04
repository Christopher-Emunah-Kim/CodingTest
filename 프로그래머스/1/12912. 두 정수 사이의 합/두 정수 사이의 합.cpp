#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a == b) answer = a;
    else if( a < b)
    {
        for(int i = a; i <=b; i++) { answer+=i;  }
    }
    else
    {
        for(int j = b; j<=a; j++) { answer+=j;  }
    }
    
    return answer;
}