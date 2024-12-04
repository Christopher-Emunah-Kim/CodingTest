#include <iostream>
#include <vector>

using namespace std;
int solution(int n)
{
    int answer = 0;

    string sum = to_string(n);
    for(auto s : sum)
    {
        answer += s-'0';
    }

    return answer;
}