#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    //단어별 인덱스 체크
    int idx = 0;
    //모두 소문자로
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    //문자열 돌면서 단어마다 짝홀수 인덱스 처리
    for(auto& c : s)
    {
        if(c == ' ') //공백문자 만나면
        {
            idx = 0; //인덱스 초기화
            continue; //건너뛰기
        }
        if(idx % 2 == 0) //짝수인덱스
        {
            c -= 32; //대문자로 바꾸기
        }
        idx++; 
    }
    answer = s;
    return answer;
}