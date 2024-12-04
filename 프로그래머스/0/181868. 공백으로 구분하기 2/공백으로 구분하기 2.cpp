#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    string s="";
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] != ' ') s+=my_string[i];
        else
        {
            if(!s.empty())
            {
                 answer.push_back(s);
                 s="";
            } 
        }
    }
    if(!s.empty()) answer.push_back(s);
    
    return answer;
}