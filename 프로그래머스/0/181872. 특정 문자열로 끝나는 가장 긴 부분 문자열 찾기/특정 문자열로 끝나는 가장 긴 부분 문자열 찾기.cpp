#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    
    //myString의 뒤에서부터 pat만큼 사이즈를 잘라서 일치하는지 검사
    for(int i = myString.size() - pat.size(); i >= 0; --i) {
        if(pat == myString.substr(i, pat.size())) {
            answer += myString.substr(0, i + pat.size());
            break;
        }
    }
    return answer;
}