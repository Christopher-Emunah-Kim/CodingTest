#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
        
    int s = 0;
    int e = 1000001;
    //전체 베열검사
    for(auto que : queries)
    {
        //queries s~e의 내용 검사
        for(int j = que[0]; j <= que[1]; j++)
        {
            //arr[j]가 k의 배수이면서 최댓값 이내인지 검사
            if((j % que[2] == 0) && arr[j]<e)
            {
                //해당하는 경우 1을 더함
                arr[j]++;
            }
        }
    }
    //값반환
    answer = arr;
        
    return answer;
}