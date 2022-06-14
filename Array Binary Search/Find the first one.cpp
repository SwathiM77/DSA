#include <bits/stdc++.h>
using namespace std;

int zeroOnes(int n, vector<int> arr){
    int start = 0,end = arr.size()-1;
    int ans = INT_MAX;
    if(arr[end] == 0) return -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == 1){
            ans = min(ans,mid);
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    vector<int > arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int result = zeroOnes(n, arr);
    cout << result << "\n";
}
