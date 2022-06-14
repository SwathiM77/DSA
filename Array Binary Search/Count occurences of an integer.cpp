#include <bits/stdc++.h>
using namespace std;

int countOccurrences(int n, vector<int> &arr, int k){
    int start = 0, end = arr.size()-1,ind = -1,count=0;
    while(start<=end){
        int mid = start +(end -start)/2;
        if( arr[mid] == k ){
            ind = mid;
            count++;
            break;
        }
        if(arr[mid] < k)
            start = mid+1;
        else
            end = mid-1;
    }
    if(ind == -1)
        return 0;
    start = ind-1;
    end = ind+1;
    while(start>=0 && arr[start] == k){
        start--;
        count++;
    }
    while(end<=n-1 && arr[end] == k){
        end++;
        count++;
    }
    return count;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = countOccurrences(n, arr, k);
    cout << result;
}
