#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    for(int i = 0; i < binomial.size(); i++)
    {
        if(binomial[i] == '+')
        {
            return stoi(binomial.substr(0, i-1))+stoi(binomial.substr(i+1));
        }
        else if(binomial[i] == '-')
        {
            return stoi(binomial.substr(0, i-1))-stoi(binomial.substr(i+1));
        }
        else if(binomial[i] == '*')
        {
            return stoi(binomial.substr(0, i-1))*stoi(binomial.substr(i+1));
        } 
    }
    
    return answer;
}