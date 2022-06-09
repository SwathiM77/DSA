#include <bits/stdc++.h>
using namespace std;

int removeDuplicatesFromSortedArrayII(int n, vector<int>& nums){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(i<n-2 && nums[i] == nums[i+1] && nums[i] == nums[i+2])
            continue;
        else{
            nums[cnt] = nums[i];
            // cout<<" nums[cnt]: "<<nums[cnt]<<endl;
            cnt++;
        }    
    }
    return cnt;
}


int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int new_length = removeDuplicatesFromSortedArrayII(n, nums);
    cout << new_length << "\n";
    for (int i = 0; i < new_length; i++)
    {
        cout << nums[i] << " ";
    }
}
