#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    
    //reverse는 iterator위치를 줘야되서  begin, end 인덱스 기준으로 값을 줘야함.
    reverse(my_string.begin()+s,my_string.end()+(e-my_string.size())+1);
    
    return my_string;
}