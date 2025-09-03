#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    // 2016년은 윤년이므로 2월이 29일까지 있음
    vector<int> daysInMonth = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 2016년 1월 1일은 금요일 (FRI) 기준
    vector<string> weekDays = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};

    int totalDays = b;

    for (int i = 0; i < a - 1; ++i) {
        totalDays += daysInMonth[i];
    }

    return weekDays[(totalDays - 1) % 7];
}