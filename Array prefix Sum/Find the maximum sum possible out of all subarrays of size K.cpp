#include <bits/stdc++.h>
using namespace std;

int maximumSubarraySumSizeK(vector<int>&arr, int n, int k){
    int currsum = 0;
    for(int i=0;i<k;i++)
        currsum+=arr[i];
    int maxi = currsum;
    for(int i=k;i<n;i++){
        currsum+=arr[i]-arr[i-k];
        maxi = max(maxi,currsum);
    }
    return maxi;
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maximumSubarraySumSizeK(arr,n,k);
}
