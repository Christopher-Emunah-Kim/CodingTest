#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i = 0; i < commands.size(); i++)
    {
        
        int s = commands[i][0];
        int e = commands[i][1];
        int o = commands[i][2];
        
        vector<int> temp(array.begin()+s-1, array.begin()+e);
        
        sort(temp.begin(), temp.end());

        answer.push_back(temp[o-1]);
        
    }
    
    
    return answer;
}