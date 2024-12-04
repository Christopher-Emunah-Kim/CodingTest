#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    int a,b;
   
     //start부터 end까지 arr를 검사해서 k보다 크면서 가장 작은 수.
    for(vector<int> qeuery : queries)
    {
        a = 0;
        b = 1000001;
        for(int j = qeuery[0]; j <= qeuery[1]; j++ )
        {
            if(qeuery[2]<arr[j] && arr[j]<b)
            {
                b = arr[j];
                a = 1;
            }
        }
        if(a == 1)
        {
            answer.push_back(b);
        }
        else
        {
            answer.push_back(-1);
        }
    }
    
    
    
    
    return answer;
}