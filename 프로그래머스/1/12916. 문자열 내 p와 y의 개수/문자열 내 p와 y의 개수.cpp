#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    int pcnt=0;
    int ycnt=0;
    for(auto c : s)
    {
        if (c == 'p') pcnt++;
        else if(c == 'y') ycnt++;
    }
    
    if(pcnt != ycnt) answer= false; 

    return answer;
}