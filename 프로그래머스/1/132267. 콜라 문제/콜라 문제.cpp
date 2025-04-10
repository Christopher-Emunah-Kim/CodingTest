#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    //n개를 가지고 가면?
    //a의 몫만큼 b개의 병을 받고, n을 갱신
    //n이 a보다 작아질때까지 이를 반복하고 b를 합산.
    while (n >= a) {
        int bottle = (n / a) * b; // 마트에서 받는 콜라 수
        answer += bottle;
        n = (n % a) + bottle; // 남은 병 + 새로 마신 병의 빈 병
    }
    
    return answer;
}