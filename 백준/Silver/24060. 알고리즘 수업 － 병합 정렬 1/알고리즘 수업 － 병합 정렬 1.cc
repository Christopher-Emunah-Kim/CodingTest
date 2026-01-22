#include <iostream>
#include <vector>

using namespace std;

int temp[500000];
int cnt = 0;
int k;
int answer = -1;

void Merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int t = 1;
    
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[t++] = arr[i++];
        }
        else
        {
            temp[t++] = arr[j++];
        }
    }
    
    while (i <= mid)
    {
        temp[t++] = arr[i++];
    }
    
    while (j <= right)
    {
        temp[t++] = arr[j++];
    }
    
    //임시배열에 저장해둔 값을 원본 배열로 복사.
    i = left;
    t = 1;
    
    while (i <= right)
    {
        //cnt가 k번째에 도달했을때 answer에 값 저장.
        cnt++;
        if (cnt == k)
        {
            answer= temp[t];
        }
        arr[i++] = temp[t++];
    }
}

void Merge_Sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        Merge_Sort(arr, left, mid);
        Merge_Sort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
    }
}


int main() {
    //병합정렬로 배열 source을 오름차순 정렬할 경우 배열 source에 K번째 저장되는 수 구하기
    int num;
    if (!(cin >> num >> k))
    {
        return 0;
    }
    
    //num크기만큼의 배열 생성 및 MergeSort
    vector<int> source(num);
    for (int i = 0; i < num; i++)
    {
        cin >> source[i];
    }
    
    Merge_Sort(source.data(), 0, num -1);
    
    //Merge과정에서 저장된 값 출력
    cout << answer << endl;
  
    return 0;
}