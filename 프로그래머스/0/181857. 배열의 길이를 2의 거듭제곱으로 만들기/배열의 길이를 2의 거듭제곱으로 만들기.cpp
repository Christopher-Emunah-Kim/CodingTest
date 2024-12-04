#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int size = arr.size();
    int idx;
    for(int i = 0; i < size; i++)
    {
        if( pow(2, i) == size) return arr;
        else if( pow(2, i) > size ) 
        {
            idx = i;
            break;
        }
    }
    int m1 = pow(2, idx) - size;
    
    for(int j = 0; j < m1; j++) arr.push_back(0);
     
    return arr;
}