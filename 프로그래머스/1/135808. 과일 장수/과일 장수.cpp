#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int solution(int k, int m, vector<int> score) {
    int answer = 0;
	sort(score.begin(), score.end(), greater<int>());
	int boxCount = score.size() / m;
	if (boxCount == 0)
		return 0;
	for (int i = 0; i < boxCount; ++i)
	{
        //i번째 상자의 마지막 사과(최저점수 사과) * m개 = 상자당 가격
		answer += score[(i + 1) * m - 1] * m;
        
	}

    return answer;
}