#include <iostream>
#include <cmath>

using namespace std;


void HanoiRecursive(int num, int start, int end, int bypass)
{
    if (num <= 0)
    {
        return;
    }
    
    bypass = 6 - start - end;
    
    HanoiRecursive(num-1, start, bypass, end);
    
    cout << start << " " << end << "\n";
    
    HanoiRecursive(num-1, bypass, end, start);
}



int main() {
    //하노이 탑 정렬 문제
    //1번 탑을 3번째 탑으로 이동하는 이동횟수 구하기
    //N개의 탑을 N번째와 (N-1)번째까지의 처리로 분할..
    
    
    int num;
    int cnt;
    if (!(cin >> num))
    {
        return 0;
    }
    
    cnt = (1 << num) - 1;
    cout << cnt << "\n";
    HanoiRecursive(num, 1, 3, 2);
    
    
    
    return 0;
}