#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int cnt = 0;
    for(int i : num_list)
    {
        while(i != 1)
        {
            if(i % 2 == 0)
            {
                cnt++; 
                i = i / 2;
            }
            else
            {
                cnt++; 
                i = (i-1)/2;
            }
        }
    }
    answer = cnt;
    
    return answer;
}