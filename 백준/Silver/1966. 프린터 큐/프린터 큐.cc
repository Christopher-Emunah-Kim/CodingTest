#include <iostream>
#include <queue>

using namespace std;

int main() {
    int i;
    cin >> i;
    while (i--)
    {
        int size;
        int target;
        cin >> size >> target;
        priority_queue<int> pq;
        queue<pair<int, int>> q; //중요도, 초기 인덱스
        
        for (int j = 0; j < size; j++)
        {
            int tmp;
            cin >> tmp;
            pq.push(tmp); //우선순위 정렬
            q.push({tmp, j});  //정렬x
        }
        
        //뒤에 나보다 우선순위가 큰 문서가 있으면 나를 빼고 뒤로 넣는다.
        int count = 0;
        while (!q.empty())
        {
            if (pq.top() > q.front().first)
            {
                pair<int, int> tmp = q.front();
                q.pop();
                q.push(tmp);
            }
            else if (pq.top() == q.front().first)
            {
                int cur = q.front().second;
                count++;
                pq.pop();
                q.pop();
                
                if (cur == target)
                {
                    cout << count << '\n';
                    break;
                }
            }
        }
        
        
        
    }
    
    
  
    return 0;
}