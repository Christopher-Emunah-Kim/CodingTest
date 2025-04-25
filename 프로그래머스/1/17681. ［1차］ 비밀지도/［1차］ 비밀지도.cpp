#include <bitset>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    //arr1과 arr2의 모든 인덱스를 비트 연산으로 합집합을 만든다.
    for (int i = 0; i < n; i++)
    {
        //비트 합연산
        int bitresult = arr1[i] | arr2[i];
        //이진수 변환
        bitset<16> bitset(bitresult);
        //사용할 자릿수만큼 추출
        string bitstring = bitset.to_string().substr(16-n);
        for (auto& s : bitstring)
        {
            s = (s == '1')? '#' : ' ';
        }
        answer.push_back(bitstring);
    }
    
    
    return answer;
}
