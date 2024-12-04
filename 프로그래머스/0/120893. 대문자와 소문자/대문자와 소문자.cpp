#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(auto& s : my_string)
    {
        if(islower(s)) s = toupper(s);
        else s = tolower(s);
    }
    
    return my_string;
}