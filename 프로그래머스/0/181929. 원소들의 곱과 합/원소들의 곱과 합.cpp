#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int a = 1;      
    int b = 0;
    
    for(int i=0; i < num_list.size(); i++)
    {
        //모든 원소들의 곱을 구한다.
        a *= num_list[i];
        //모든 원소들의 합을 구한다.
        b += num_list[i];
    }
    //원소들의 합의 제곱
    int c = pow(b,2);
    
    //두값을 비교하여 출력한다.
    a > c? answer = 0: answer = 1;

    
    return answer;
}