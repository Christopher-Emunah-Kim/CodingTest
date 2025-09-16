#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;

    int painted = 0; //마지막으로 칠해진 구역 마지막 번호
    for (int i : section)
    {
        if (i < painted) //이미 앞 동작으로 칠해졌다면 패스
        {
            continue;
        }
        painted = i + m; //이번동작으로 칠해지면 마지막 구역 번호 갱신
        answer++; //칠한 횟수
    }
	
    return answer;
}