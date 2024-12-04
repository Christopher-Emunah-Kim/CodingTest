#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    for(auto c : myString)
    {
        if(c == 'a') answer += 'A';
        else answer += c;
    }
    
    return answer;
}