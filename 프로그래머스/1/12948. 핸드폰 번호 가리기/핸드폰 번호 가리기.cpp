#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    for(int i = 0; i < phone_number.size()-4; i++)
    {
        answer += '*';
    }
    for(int j = phone_number.size()-4; j < phone_number.size(); j++)
    {
        answer+=phone_number[j];
    }
    
    return answer;
}