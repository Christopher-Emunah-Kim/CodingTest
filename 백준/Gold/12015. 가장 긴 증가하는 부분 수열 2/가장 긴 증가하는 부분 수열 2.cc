#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    cin >> size;
    vector<int> result;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        
        //뒤에가 비어있거나, 마지막에 배열에 추가해둔 값이 temp보다 작으면
        if (result.empty() || result.back() < temp)
        {
            result.push_back(temp);
        }
        //temp보다 큰 값이 마지막에 존재하면 기존에 넣어둔것중 lower_bound로 교체할수있는게 있는지 확인.
        else
        {
            auto it = lower_bound(result.begin(), result.end(), temp);
            *it = temp;
        }
        
    }
    cout << result.size() << '\n';
    
    return 0;
}