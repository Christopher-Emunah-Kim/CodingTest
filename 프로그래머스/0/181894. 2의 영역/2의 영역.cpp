#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int f_idx = -1;
    int e_idx = -1;
    //최초의 2와 마지막 2를 찾아내야한다.
    for(int f = 0; f < arr.size(); f++)
    {
        if( arr[f] == 2 ) 
        {
            f_idx = f; 
            break;
        }
    }
    for(int e = arr.size()-1; e >= 0; e--)
    {
        if( arr[e] == 2 )
        {
            e_idx = e; 
            break;
        }
    }
    
    if( f_idx == -1 && e_idx == -1 ) return {-1};
    else if(e_idx != -1 && f_idx == -1)
    {
        for(int a = 0; a < e_idx; a++) answer.push_back(arr[a]);
    }
    else if(f_idx != -1 && e_idx == -1)
    {
        for(int b = f_idx; b < arr.size(); b++) answer.push_back(arr[b]);
    }
    else
    {
        for(int i = f_idx; i <= e_idx; i++) answer.push_back(arr[i]);
    }
    
    
    return answer;
}