#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int solution(int n) {
    vector<int> temp;
    int answer = 0;
    
    // pow 안쓰고 3진법 변환
    while (n > 0) {
        temp.push_back(n % 3);
        n /= 3;
    }
    reverse(temp.begin(), temp.end());
    
    // 뒤집어진 3진법을 10진법으로 변환
    int check = 1; // 3의 거듭제곱 관리
    for (int i : temp) {
        answer += i * check;
        check *= 3;
    }

    return answer;
}