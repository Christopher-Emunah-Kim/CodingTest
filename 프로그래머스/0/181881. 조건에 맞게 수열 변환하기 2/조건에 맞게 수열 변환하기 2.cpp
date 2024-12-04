#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    vector<int> xArr = arr;
    int cnt = 0;
    
    while(true)
    {
	    for(int& i : arr)
	    {
		    if(50 <= i && i % 2 == 0) i /= 2;
		    else if( i < 50 && i % 2 == 1) 
		    {
			    i *= 2;
			    i += 1;
		    }
	    }
	    cnt++;
	    if(xArr == arr) return cnt-1;
	    else xArr = arr;
    }
}