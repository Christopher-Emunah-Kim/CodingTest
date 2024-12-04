#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    vector<string> ops = {"a", "e", "i", "o", "u"};
    for(auto c : ops)
    {
        while(my_string.find(c) != string::npos)
        {
            my_string.replace(my_string.find(c), 1, "*");
        }
    }
    for(auto s : my_string)
    {
        if(s == '*') continue;
        else answer+=s;
    }
    
    
    
    return answer;
}