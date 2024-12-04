#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    //문자열로 변환할때 받을 변수 선언
    string str1;
    string str2;
    //리스트 전체 순환
    for(int i = 0; i < num_list.size(); i++)
    {
        //리스트의 짝수라면
        if(num_list[i]%2 == 0)
        {
            //리스트를 문자열로 변환하여 더하기
            str1 += to_string(num_list[i]);
        }
        //리스트의 홀수라면
        else
        {
            //리스트를 문자열로 변환하여 더하기
            str2 += to_string(num_list[i]);
        }
    }
    //문자열을 다시 int로 변환하여 더하기
    answer = stoi(str1) + stoi(str2);
    
    return answer;
}