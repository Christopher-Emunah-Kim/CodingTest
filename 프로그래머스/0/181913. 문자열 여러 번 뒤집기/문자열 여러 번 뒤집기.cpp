#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    
    for(auto query : queries)
    {
        //reverse는 iterator위치를 줘야되서  begin, end 인덱스 기준으로 값을 줘야함
        reverse(my_string.begin()+query[0], my_string.end()-(my_string.size()-query[1])+1);
    }
    
    return my_string;
}