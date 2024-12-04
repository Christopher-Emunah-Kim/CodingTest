#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    
    if( n == 1 )
    {
        for(int a = 0; a <= slicer[1]; a++) answer.push_back(num_list[a]);
    }
    else if( n == 2 )
    {
        for(int b = slicer[0]; b < num_list.size(); b++) answer.push_back(num_list[b]);
    }
    else if( n == 3 )
    {
        for(int c = slicer[0]; c <= slicer[1]; c++) answer.push_back(num_list[c]);
    }
    else
    {
        for(int i = slicer[0]; i <= slicer[1]; i += slicer[2]) answer.push_back(num_list[i]);
    }
    
    return answer;
}