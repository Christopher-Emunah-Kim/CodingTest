#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    long long target;
    cin>>size>>target;
    
    vector<long long> arr(size);
    long long high = 0;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        high = max(high,arr[i]);
    }
    
    long long low = 0;
    long long result = 0;
    while (low <= high)
    {
        long long count = 0;
        long long mid = (low + high) / 2;
        
        for (auto i : arr)
        {
            if (i > mid)
            {
                count += (i - mid);
            }
        }
        
        if (count >= target)
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