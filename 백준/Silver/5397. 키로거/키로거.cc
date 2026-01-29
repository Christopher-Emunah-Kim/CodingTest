#include <iostream>
#include <list>

using namespace std;

int main() {
    //첫줄에 테스트케이스 입력 갯수받고
    //두번째 줄에 for문 돌릴 명령어 갯수 받고
    //명령어 종류에 따라 포인터 옮기거나, 중간 삽입/삭제 진행
    //- 커서 기준 왼쪽 삭제
    //< > 화살표 입력
    
    int size;
    cin >> size;
    
    while (size--)
    {
        string target;
        cin >> target;
        
        list<char> myList;
        list<char>::iterator it = myList.begin();
        
        for (char c : target)
        {
            if ( c == '-')
            {
                if (it != myList.begin())
                {
                    it = myList.erase(--it);
                }
            }
            else if ( c == '>')
            {
                if (it != myList.end())
                {
                    ++it;
                }
            }
            else if ( c == '<')
            {
                if (it != myList.begin())
                {
                    --it;
                }
            }
            else
            {
                myList.insert(it, c);
            }
        }
        
        for (char c : myList)
        {
            cout << c;
        }
        cout << "\n";
    }
    
    
    
  
    return 0;
}
