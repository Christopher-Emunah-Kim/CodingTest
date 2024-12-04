#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    int idx = -1;
    idx = myString.find(pat);
    while(idx != -1)
    {
       if(myString.substr(idx, pat.size()) == pat)
       {
           answer++;
           myString = myString.substr(idx+1);
       }
       idx = myString.find(pat);
    }
    
    
    return answer;
}