#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    //조합순열 조합검사배열 오름차순으로 만들기
    vector<int> visit;
    for(int i = 0; i < number.size() - 3; i++) visit.push_back(0);
    for(int i = number.size()-3; i < number.size(); i++) visit.push_back(1);
    
    //do-while로 모든 순열 뽑아서 내용 검사
    do{
        int sum = 0;
        for(int i = 0; i<number.size(); i++)
        {
            //검사식에서 1이 나오면 더해보기
            if(visit[i] == 1) sum += number[i];
        }
        //모두 더한값이 0이 되면 조건 충족
        if(sum == 0) answer++;
    }
    while(next_permutation(visit.begin(), visit.end()));
    
    
    return answer;
}