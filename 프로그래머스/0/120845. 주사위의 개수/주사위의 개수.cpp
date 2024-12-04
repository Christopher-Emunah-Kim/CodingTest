#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 1;
    
    for(int i : box)
    {
        answer *= (i / n);
    }
    
    return answer;
}