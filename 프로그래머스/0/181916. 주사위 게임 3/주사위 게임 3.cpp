#include <string>
#include <vector>
#include <map>
#include <stdlib.h>
#include <math.h>

using namespace std;

int solution(int a, int b, int c, int d) {
    //결과를 배열로 만들고
    vector<int> result = {a, b, c, d};
    //결과를 map형태로 변형해 중복을 제거
    map<int, int> rm; //result map
    for(auto i : result) { rm[i]++; }
    
    //map의 요소를 검사(0번 기준)
    int p = rm.begin()->first;
    int r = (++rm.begin())->first;
    int q = (--rm.end())->first;
    //map의 요소가 하나라면(모두 같은 숫자라면)
    if(rm.size() == 1) { return 1111 * p;  }
    //map의 요소가 2개라면(1,3 or 2,2)
    else if( rm.size() ==2 )
    {
        //(2,2 조합인 경우)
        if( rm.begin()->second == 2 ) { return ((p+q) * abs(p-q)); }
        //(1,3 조합인 경우 - p가 1)
        else if(rm.begin()->second == 1)  { return pow((10*q + p), 2);  }
        //(1,3 조합인 경우 - q가 1)
        else { return pow((10*p + q), 2); }  
    }
    //map의 요소가 3개라면(p,q,r)
    else if( rm. size() == 3)
    {
        if( rm.begin()->second == 2) { return q*r; } //(2, 1, 1)
        else if((++rm.begin())->second == 2) {return p*q; } //(1, 2, 1)
        else { return p*r; } //(1, 1, 2)
    }
    //map의 요소가 4개라면
    else
    {
        return p; //정렬되어있으니 키 최솟값 반환
    }
}