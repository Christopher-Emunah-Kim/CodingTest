#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    
    //[a, a+d, a+2d, a+3d, a+4d, a+5d ....]
    //[i, i+1, i+2, i+3, i+4, i+5....]
    for(int i = 0; i < included.size(); i++)
    {
        if(included[i] == true)
        {
            answer += a + (i*d);
        }
        else
            continue;
    }
    
    
    
    return answer;
}