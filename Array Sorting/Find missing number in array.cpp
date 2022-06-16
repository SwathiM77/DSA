#include <bits/stdc++.h>
using namespace std;

int singleMissingNumber(vector<int>nums, int n){
    sort(nums.begin(),nums.end());
    int i;
    for(i=0;i<n;i++){
        if(nums[i] != i)
            return i;
    }
    if(nums[i] != n)
        return n;
}


int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<singleMissingNumber(nums,n);

}
