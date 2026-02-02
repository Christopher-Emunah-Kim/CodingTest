#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int k;
    long long n;
    cin >> k >> n;
    
    vector<long long> arr(k);
    long long high = 0;
    for (int i = 0; i < k; ++i)
    {
        cin >> arr[i];
        high = max(high, arr[i]);
    }
    
    long long low = 1;
    long long result = 0;
    
    while (low <= high)
    {
        long long count = 0;
        long long mid = (low + high) / 2;
        
        for (auto i : arr)
        {
            count += i / mid;
        }
        
        if (count >= n)
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