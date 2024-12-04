#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    
    int newmax = 0;
    int idx = 0;
    for(int i = 0; i < array.size(); i++)
    {
        int check = max(newmax, array[i]);
        if(check == array[i]) 
        {
            newmax = array[i]; 
            idx = i;
        }
    }
    return vector<int> {newmax, idx};
    
}