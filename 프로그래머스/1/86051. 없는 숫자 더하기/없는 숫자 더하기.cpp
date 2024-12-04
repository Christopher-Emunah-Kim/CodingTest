#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    vector<int> full = {0,1,2,3,4,5,6,7,8,9};
    
    for(int i : full)
    {
        if(find(numbers.begin(), numbers.end(), i) == numbers.end()) answer += i;
    }
    
    return answer;
}