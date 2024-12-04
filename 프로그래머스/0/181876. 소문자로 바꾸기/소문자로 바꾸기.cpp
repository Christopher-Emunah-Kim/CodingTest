#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(auto& c : myString)
    {
        if( c + 32 < 123 ) answer += tolower(c);
        else answer += c;
    }
    
    return answer;
}