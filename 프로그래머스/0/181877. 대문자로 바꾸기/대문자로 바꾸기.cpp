#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    transform(myString.begin(), myString.end(), myString.begin(), ::toupper);
    
    return myString;
}