#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string temp1 = "";
    string temp2 = "";
    //food 배열의 음식은 절반만 사용가능하다.
    for (int i = 1; i < food.size(); i++)
    {
       
        for (int j = 0; j < food[i]/2; j++)
        {
            //정순 나열
            temp1 += to_string(i);
            //역순 나열
            temp2.insert(0, to_string(i));
        }
    }
    answer += temp1;
    answer += to_string(0);
    answer += temp2;
    


    return answer;
}