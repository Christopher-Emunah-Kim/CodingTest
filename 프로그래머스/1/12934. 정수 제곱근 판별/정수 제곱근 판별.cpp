#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    long long x = (long long)sqrt(n);
    if( n == x * x ) return answer = pow(x+1, 2);
    else return answer = -1;
    
    return answer;
}