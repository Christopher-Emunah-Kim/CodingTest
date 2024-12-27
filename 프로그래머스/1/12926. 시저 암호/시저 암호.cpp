#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(auto& c : s)
    {
        if(c>= 'a' && c <= 'z')
        {
            if((c+n) >= 'a' && (c+n) <= 'z') c += n;
            else c += (n-26);
        }
        if(c >= 'A' && c <= 'Z')
        {
            if((c+n) >= 'A' && (c+n) <= 'Z') c+=n;
            else c += (n-26);
        }
    }
    
    
    return s;
}