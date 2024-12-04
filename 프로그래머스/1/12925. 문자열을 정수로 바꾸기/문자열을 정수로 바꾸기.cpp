#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    string temp = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[0] == '-')
        {
            for(int j = 1; j < s.size(); j++)
            {
                temp += s[j];
            }
            return -(stoi(temp));
        }
        else continue;
    }
    
    
    return stoi(s);
}