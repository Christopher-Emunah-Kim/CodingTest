#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int sizeidx = num_list.size() - 1;
    //마지막 원소, 그전 원소
    int a = num_list[sizeidx];
    int b = num_list[sizeidx-1];
    
    if(a>b)
    {
        num_list.push_back(a-b);
    }
    else
    {
        num_list.push_back(2*a);
    }
    
    
    return answer = num_list;
}