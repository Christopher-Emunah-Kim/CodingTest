#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    
    if(arr.size() == 1) return {-1};
    
    auto a = *min_element(arr.begin(), arr.end());
    for(int i; i <arr.size(); i++)
    {
        if(arr[i] == a) arr.erase(arr.begin()+i);
    }
    
    return arr;
}