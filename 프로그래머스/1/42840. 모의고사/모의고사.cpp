#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    //10000문제
    //1번, 2번, 3번이 정답을 맞춘 갯수를 세서
    //가장 높은 점수를 받은 사람을 리턴.

    vector<int> firstPatternVec = { 1,2,3,4,5 };
    vector<int> secondPatternVec = { 2,1,2,3,2,4,2,5 };
    vector<int> thirdPatternVec = { 3,3,1,1,2,2,4,4,5,5 };

	int firstScore = 0;
	int secondScore = 0;
	int thirdScore = 0;
    for (int i = 0; i < answers.size(); ++i)
    {
        if (answers[i] == firstPatternVec[i % firstPatternVec.size()])
        {
            firstScore++;
        }
        if (answers[i] == secondPatternVec[i % secondPatternVec.size()])
        {
            secondScore++;
        }
        if (answers[i] == thirdPatternVec[i % thirdPatternVec.size()])
        {
            thirdScore++;
        }
	}
	int maxScore = max(firstScore, max(secondScore, thirdScore));
	if (firstScore == maxScore) answer.push_back(1);
	if (secondScore == maxScore) answer.push_back(2);
	if (thirdScore == maxScore) answer.push_back(3);

    return answer;
}
