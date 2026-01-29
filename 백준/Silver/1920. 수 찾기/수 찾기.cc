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
        
        if (binary_search(arr.begin(), arr.end(), target))
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"0\n";
        }
    }
  
    return 0;
}