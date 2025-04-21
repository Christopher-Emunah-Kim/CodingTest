#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;

    //k 일까지는 모두가 명예의 전당에 들어감
    //k 일 이후로는 명예의 전당에 있는 가장 작은 수와 새로운 점수를 비교함
    //비교해서 더 작은수를 제외하고 큰 수를 명예의 전당에 넣음
    //7일간 이걸 반복해서 마지막날 가장 작은 수를 반환.
    vector<int> temp;
    for (int i = 0; i < score.size(); i++)
    {
        //k일까지는 그냥 삽입
        if (temp.size() < k)
        {
            temp.push_back(score[i]);
            sort(temp.rbegin(), temp.rend());
            answer.push_back(temp[temp.size()-1]);
        }
        else 
        {
            if (score[i] > temp[temp.size()-1])
            {
                temp.pop_back();
                temp.push_back(score[i]);
                sort(temp.rbegin(), temp.rend());
                answer.push_back(temp[temp.size()-1]);
            }
            else
            {
                answer.push_back(temp[temp.size()-1]);
            }
        }
    }
    
    return answer;
}