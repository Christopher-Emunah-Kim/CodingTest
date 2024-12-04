#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer = {arr[0]};

    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] == arr[i-1]) continue;
        else answer.push_back(arr[i]);
    }

    return answer;
}