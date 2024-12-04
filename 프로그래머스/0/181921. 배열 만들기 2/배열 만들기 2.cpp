#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    //l이상 r이하에서
    for(int i = l; i<= r; i++)
    {
        string str = to_string(i);
        bool check = true;
        //5와 0으로만 이루어진 정수를 추출
        for(char c : str)
        {
            if(c != '0' && c != '5')
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            answer.push_back(i);
        }
    }
    
    if(answer.empty())
    {
        answer.push_back(-1);
    }
    
    return answer;
}