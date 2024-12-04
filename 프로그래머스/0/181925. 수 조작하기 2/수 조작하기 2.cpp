#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer;
    
    for(int i = 1; i < numLog.size(); i++)
    {
        int diff = numLog[i] - numLog[i-1];
        char con;
        if(diff == 1){con = 'w';}
        else if(diff == -1){con = 's';}
        else if(diff == 10){con = 'd';}
        else if(diff == -10){con = 'a';}
            
        answer += con;    
    }
    
    return answer;
}