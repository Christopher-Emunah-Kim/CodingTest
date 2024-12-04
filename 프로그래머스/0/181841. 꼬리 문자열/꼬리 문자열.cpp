#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    
    for(string c : str_list)
    {
        if(c.find(ex) != string::npos) continue;
        
        answer += c;
    }
    
    
    return answer;
}