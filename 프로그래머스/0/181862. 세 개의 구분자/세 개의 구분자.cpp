#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    
    vector<string> op = {"a", "b", "c"};
    //op로 구분자들을 바꿔주고
    for(auto c : op)
    {
        while(myStr.find(c) != string::npos)
        {
         myStr.replace(myStr.find(c), 1, "*");
        }
    }
    
    int idx = -1;
    idx = myStr.find("*");
    while( idx != -1 )
    {
        if(myStr.substr(0, idx) != "")
            answer.push_back(myStr.substr(0, idx));
        
        myStr = myStr.substr(idx+1);
        idx = myStr.find("*");
    }
    answer.push_back(myStr);
    
    if(myStr == "") 
        return {"EMPTY"};
    
    return answer;
}