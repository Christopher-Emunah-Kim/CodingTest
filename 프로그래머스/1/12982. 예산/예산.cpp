#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    //신청사항 순서대로 정렬
    sort(d.begin(), d.end());
    
    //작은순서부터 합하며 budget과 비교하기
    int sum = 0;
    for(int i = 0; i < d.size(); i++)
    {
        sum+=d[i];
        if(sum > budget) break;
        answer ++;
    }
    
    return answer;
}