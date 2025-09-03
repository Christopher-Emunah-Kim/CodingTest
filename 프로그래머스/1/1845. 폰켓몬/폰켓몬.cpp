#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> temp;
    //nums를 돌면서
    //같은 숫자를 제외하고 새 vector에 담기
    //새 vector의 크기가 nums/2보다 크면 nums/2 반환
    //새 vector의 크기가 nums/2보다 작으면 vector.size반환
    
    for(int i : nums)
    {
        if(find(temp.begin(), temp.end(), i) == temp.end())
        {
            temp.push_back(i);
        }
    }
    
    if(temp.size() > nums.size()/2)
    {
        answer = nums.size()/2;
    }
    else
    {
        answer = temp.size();
    }
    
    
    return answer;
}