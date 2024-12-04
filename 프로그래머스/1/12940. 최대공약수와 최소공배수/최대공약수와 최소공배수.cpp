#include <string>
#include <vector>

using namespace std;

//n,m의 최소공배수 찾기
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
//n,m의 최대공약수 찾기
int lcm(int a, int b) {
	int answer = a * b / gcd(a, b);
	return answer;
}

vector<int> solution(int n, int m) {
    vector<int> answer;

	int g = gcd(n, m);
	answer.push_back(g);

	int l = lcm(n, m);
	answer.push_back(l);
	
    return answer;
}