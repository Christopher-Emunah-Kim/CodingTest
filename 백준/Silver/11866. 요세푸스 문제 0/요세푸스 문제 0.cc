#include <iostream>
#include <queue>

using namespace std;


int main() {
    
    //요세푸스 문제
    //1부터N명의 사람이 원형으로 앉아있음
    //양의 정수 K. 매번 K번째 사람 제거(원형으로 돌면서)
    //제거된사람이 0. 거기부터 다시 K번째 사람 제거.
    //이 제거되는 순서를 담아서 출력.
    
    int k, n;
    cin >> n >> k;
    
    //임의 접근이 가능하고, 중간 삭제 연산이 자유로운 컨테이너..
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    
    vector<int> result;
    
    while (!q.empty())
    {
        //1~k-1번까지 뒤로 보내기
        for (int i = 1; i < k; i++)
        {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        
        //k번 result에 삽입
        result.push_back(q.front());
        q.pop(); //제거
        
    }
    
    cout << "<";
    for (int i = 0; i < result.size(); i++)
    {
        if (i == 0)
        {
            cout << result[i];
        }
        else
        {
            cout << ", " << result[i];
        }
    }
    cout << ">" << "\n";
    
    return 0;
}