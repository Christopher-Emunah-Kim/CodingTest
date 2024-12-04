#include <string>
#include <vector>

using namespace std;

int find(string str)
{
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] != '0') return i;
    }
}


string solution(string n_str) {
    string answer = "";
    
    int idx = find(n_str);
    answer = n_str.substr(idx);
    
    
    return answer;
}