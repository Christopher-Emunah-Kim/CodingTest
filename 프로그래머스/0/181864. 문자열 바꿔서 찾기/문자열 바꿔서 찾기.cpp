#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(auto& c : myString)
    {
        if(c == 'A') c = 'B';
        else c = 'A';
    }
    if(myString.find(pat) != string::npos)
        return 1;
    
    return answer;
}