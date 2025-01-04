#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
   
    map<int, bool> check; //합 중복 체크용 map
    
    //인덱스 더해서 합산
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            int sum = numbers[i] + numbers[j];
            check[sum] = true;  // 해당 합이 존재한다고 표시
        }
    }
    
    //key만 추출해서 answer저장(map이니까 자동 오름차순)
    for(auto pair : check)
    {
        answer.push_back(pair.first);
    }
    
    
    return answer;
}