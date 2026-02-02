#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    int device;
    cin >> size >> device;
    
    vector<long long> house(size);
    for (int i = 0; i < size; i++)
    {
        cin >> house[i];
    }
    sort(house.begin(), house.end());
    
    long long high = house.back() - house.front();
    long long low= 1;
    long long result = 0;
    while (low <= high)
    {
        //device갯수의 내가 원하는 값을 곱했을떄  high보다 작으면되는거 아닌가..?
        //여차피 가장 인접한 최소거리의 최대는 high보다 device 설치한 전체상태 길이가 작은걸 체크하면되는거 아닌가..?
        long long mid = (low + high) / 2;
        int count = 1;
        long long last = house[0];
        
        for (auto home : house)
        {
            if (home - last >= mid)
            {
                count++;
                last = home;
            }
        }
        
        if (count >= device)
        {
            result = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
  
    cout << result << '\n';
  
    return 0;
}