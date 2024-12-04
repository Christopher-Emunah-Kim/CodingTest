#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    
    int min = n / slice;
    if(n % slice == 0) return min;
    else return min +1;
    
}