#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    
    int answer = 0;

    
    int idx = (int)my_string.size()-(int)is_suffix.size();
    if (0 <= idx)
    {
        answer = (my_string.substr(idx) == is_suffix);
    }
    
    return answer;
    
}