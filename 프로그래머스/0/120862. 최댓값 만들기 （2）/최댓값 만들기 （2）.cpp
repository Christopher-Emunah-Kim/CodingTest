#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    
    sort(numbers.begin(), numbers.end());
    
    int s = numbers.size();
    
    return numbers[s-1]*numbers[s-2] > numbers[0]*numbers[1] ? numbers[s-1]*numbers[s-2] : numbers[0]*numbers[1];
    
}