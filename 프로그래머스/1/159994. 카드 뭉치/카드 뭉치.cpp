#include <iostream>
#include <string>
#include <vector>

using namespace std;
//goal에서 하나씩 돌면서
//각 덱을 비교해서 0번 인덱스가 동일하면
//해당 인덱스를 제거하고 다시 카드덱을 비교
void ERASE(vector<string>& obj, const string& s)
{
    if (!obj.empty() && obj[0] == s)
    {
        obj.erase(obj.begin()); // 첫 번째 원소 삭제
    }
}

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    for (const string& s : goal)
    {
        // 현재 단어가 cards1 또는 cards2의 첫 번째 단어와 같을 경우만 ERASE 호출
        if (!cards1.empty() && cards1[0] == s)
        {
            ERASE(cards1, s);
        }
        else if (!cards2.empty() && cards2[0] == s)
        {
            ERASE(cards2, s);
        }
        else
        {
            return "No"; // 어느 쪽의 카드 덱 앞에도 해당 단어가 없는 경우
        }
    }

    return "Yes";
}
