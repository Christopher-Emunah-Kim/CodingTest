#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>

using namespace std;
int solution(int a, int b) {
    int answer = 0;
    
    string str1 = to_string(a);
    string str2 = to_string(b);
    
    string a_b = str1 + str2;
    string b_a = str2 + str1;
    
    int ab = stoi(a_b);
    int ba = stoi(b_a);
    
    if(ab>=ba)
    {
        answer = ab;
    }
    else
    {
        answer = ba;
    }
    
    
    
    return answer;
}