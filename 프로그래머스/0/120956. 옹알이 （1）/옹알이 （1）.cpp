#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    //4개의 발음을 배열로 만들고
    vector<string> detect = { "aya", "ye", "woo", "ma" };
		//babbling배열 전체 검사
    for (auto s : babbling) {
        string lastDetected = "";  // 마지막으로 감지된 발음
        bool isValid = true;  // 유효성 체크변수 

        // 문자열이 비어질 때까지 반복
        while (!s.empty()) {
            bool found = false;
            //detect배열 요소로 반복검사
            for (auto d : detect) 
            {
		        //s를 앞에서부터 d만큼 잘라서 d와 비교
                if (s.substr(0, d.size()) == d) 
                {
                    // 이미 한번 확인한 발음인지 확인
                    if (lastDetected == d) {
                        isValid = false;
                        break;
                    }
                    // 현재 발음을 기록
                    lastDetected = d;  
                    // 발음 길이만큼 문자열을 자름
                    s = s.substr(d.size());  
                    // 유효성검사 통과체크
                    found = true;
                    break;
                }
            }
            //검사했을때 일치하는 발음이 없다면
            if (!found) 
            {
                isValid = false;
                break;
            }
        }
        // 유효한 경우에만 카운트 증가
        if (isValid) {
            answer++;
        }
    }

    return answer;
}