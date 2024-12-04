#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int ans = 0;
    
    //전체를 돌면서
    for(int i = 0; i < myString.size(); ++i) 
    {
        //x가 등장하면
        if(myString[i] == 'x') 
        {
            answer.push_back(ans); //그전까지의 ans값을 담고
            ans = 0; //초기화
        }
        else ans++; //x가 아니라면 계속 증가
    }
    answer.push_back(ans); //배열 다 검사하고 나서 마지막 ans값 담기
    
    return answer;
}