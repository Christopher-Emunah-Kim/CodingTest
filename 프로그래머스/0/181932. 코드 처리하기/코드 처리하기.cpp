#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    
    bool mode = false;
    
    
    //idx를 키워나가면서 아래의 내용을 처리한다.
    for(int i = 0; i < code.length() ; i++)
    {
        
        //mode가 true면
        if(mode == true)
        {
            if(code[i] != '1')
            {
                 if( i % 2 == 1 )
                {
                 answer += code[i];
                }
            }
            else
            {
                 mode = !mode; 
            }
        }
        //mode가 false면
        else
        {
            if(code[i] != '1')
            {
                if( i % 2 == 0)
                {
                answer += code[i];
                }
            }
            else 
            {
                mode = !mode;
            }  
        }    
    }
    
    if(answer == "")
    {
        answer = "EMPTY";
    }
    
    return answer;
}