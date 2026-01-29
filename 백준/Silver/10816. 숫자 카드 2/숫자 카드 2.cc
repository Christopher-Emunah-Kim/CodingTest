#define fastio() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    fastio()
    
    int size;
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int n;
    cin>>n;
    while (n--)
    {
        int target;
        cin>>target;
        
        auto cnt = upper_bound(arr.begin(), arr.end(), target) - lower_bound(arr.begin(), arr.end(), target);
        cout << cnt << " ";
    }
    cout << "\n";
  
    return 0;
}