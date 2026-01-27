#include <iostream>
#include <list>

using namespace std;

void HandleInput(list<char>& targetList, list<char>::iterator& cursor, char input);

int main() {
    //첫줄에 대상 문자열 입력 받고
    //두번째 줄에 for문 돌릴 명령어 갯수 받고
    //명령어 종류에 따라 포인터 옮기거나, 중간 삽입/삭제 진행
    //L 왼쪽칸 참조
    //D 오른쪽칸 참조
    //B 현재 가리키는 반복자 기준 왼쪽 삭제. 맨 앞이면 무시. 뒤쪽 문자는 그대로 한칸씩 땡김
    //P $ : $라는 문자를 중간 삽입
    
    
    string target;
    cin >> target;
    
    list<char> myList(target.begin(), target.end());
    list<char>::iterator cursor = myList.end();
    
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        char input;
        cin >> input;
        HandleInput(myList, cursor, input);
    }
    
    for (char c : myList)
    {
        cout << c;
    }
    cout << endl;
    
  
    return 0;
}

void HandleInput(list<char>& targetList, list<char>::iterator& cursor, char input)
{
    switch (input)
    {
    case 'L': //커서를 왼쪽으로 한칸 옮김. 문장 맨앞이면 무시
        {
            if (cursor != targetList.begin())
            {
                --cursor;
            }
        }
        break;
    case 'D': //커서를 오른쪽으로 한칸 옮김. 문장 맨 뒤면 무시
        {
            if (cursor != targetList.end())
            {
                ++cursor;
            }
        }
        break;
    case 'B': //커서 왼쪽 문자 삭제. 문장 맨앞이면 무시. 
        {
            if (cursor != targetList.begin())
            {
                cursor = targetList.erase(--cursor); //반복자 무효화
            }
        }
        break;
    case 'P': //뒤에 문자를 커서 왼쪽에 추가.
        {
            char input2;
            cin >> input2;
            targetList.insert(cursor, input2);
        }
    break;
        
    default:
        {
            
        }
        break;
    }
  
}