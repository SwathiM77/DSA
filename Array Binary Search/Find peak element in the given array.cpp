#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int>&nums){
    int start =0,end = nums.size()-1;
    while(start<end){
        int mid = start + (end-start)/2;
        if(nums[mid] < nums[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int main(){
    int N;
    cin>>N;
    vector<int>nums(N);
    for(auto &x:nums)cin>>x;
    cout<<peakElement(nums)<<"\n";
}
