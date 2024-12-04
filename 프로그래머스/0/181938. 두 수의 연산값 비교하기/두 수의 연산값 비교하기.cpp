#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string str = to_string(a) + to_string(b);
    int a_b = stoi(str);
    
    answer = max(a_b, (2*a*b));
    
    return answer;
}