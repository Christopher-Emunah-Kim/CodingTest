#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    string check;
    
    for(auto ans : my_string)
    {
        check.push_back(ans);
        if(check == is_prefix)
        {
            answer = 1;
        }
    }
    
    return answer;
}