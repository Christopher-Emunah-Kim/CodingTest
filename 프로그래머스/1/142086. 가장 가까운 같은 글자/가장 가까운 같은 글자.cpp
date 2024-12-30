#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    //체크용 map을 하나 만든다
    map<char, int> check;
    
    for(int i = 0; i < s.size(); ++i)
    {
        //처음 나온 경우
        if(check.find(s[i]) == check.end())
        {
            //해당 알파벳의 아스키코드와 일치하는 주소에 이 인덱스를 저장
            check[s[i]] = i;
            answer.push_back(-1);
        }
        //처음 나오지 않는 경우
        else
        {
            //answer에 기존에 저장된 인덱스와 지금 인덱스의 차이값을 저장.
            answer.push_back(i-check[s[i]]);
            check[s[i]] = i; //인덱스 업데이트
        }
    }
   
    
    return answer;
}