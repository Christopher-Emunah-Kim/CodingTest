#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    //결국 적절히 회전 -> 내림차순 정렬하고 가장 큰값끼리 곱하면됨
    int maxW = 0;
    int maxH = 0;
    for(auto v : sizes)
    {
        //내림차순 정렬
        sort(v.rbegin(), v.rend());
        //w 가장 큰 값 찾기
        maxW = max(v[0], maxW);
        //h 가장 큰 값 찾기
        maxH = max(v[1], maxH);
    }
    answer = maxW * maxH;
    
    
    return answer;
}