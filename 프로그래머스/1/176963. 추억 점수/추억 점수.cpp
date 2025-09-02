#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    //photo의 배열을 순환하면서
    //각 배열에 있는 이름을 name에서 서치하고
    //해당 인덱스값을 yearing에서 뽑아내서
    //sum
    
    for(auto group : photo)
    {
        int sum = 0;
        for(string s : group)
        {
            for(int i = 0; i < name.size(); ++i)
            {
                if(s == name[i])
                {
                    sum += yearning[i];
                }
            }
        }
        answer.push_back(sum);
        sum = 0;
    }
    
    return answer;
}