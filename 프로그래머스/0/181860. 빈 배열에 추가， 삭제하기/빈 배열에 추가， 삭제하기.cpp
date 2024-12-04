#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    
    for(int i = 0; i < flag.size(); i++)
    {
        if(flag[i]) 
        {
            //insert(시작위치, 횟수, 추가내용)
            answer.insert(answer.end(), arr[i]*2, arr[i]);
        }
        else
        {
            //erase(시작위치, 종료위치)
            answer.erase((answer.end()-arr[i]), answer.end());
        }
    }
    
    
    return answer;
}