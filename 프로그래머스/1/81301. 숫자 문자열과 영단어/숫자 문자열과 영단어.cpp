#include <string>
#include <unordered_map>

using namespace std;

int solution(string s) {
    
    //제시된 영단어를 숫자로 바꿀 map
    unordered_map<string, char> NumTable = {
        {"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'}, 
        {"four", '4'}, {"five", '5'}, {"six", '6'}, {"seven", '7'},
        {"eight", '8'}, {"nine", '9'}
    };
    
    string answer = "";
    string temp = "";
    
    for(char c : s)
    {
        if(c >= 'a' && c <= 'z')
        {
            //영문자면 temp에 담고
            temp += c;
            //지금까지 담은 temp를 NumTable에서 서치
            if(NumTable.find(temp) != NumTable.end())
            {
                //만약 있으면 temp라는 키의 value값을 answer에 추가
                answer += NumTable[temp];
                temp = ""; //temp비우기
            }
        }
        else
        {
            answer += c; //숫자는 그냥 추가
        }
    }
    
    
    return stoi(answer); //string을 숫자로 변환해 리턴
}