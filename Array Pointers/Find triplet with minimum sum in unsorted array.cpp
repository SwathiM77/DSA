#include <bits/stdc++.h>
using namespace std;

long long int maxSumTriplet(int n, vector<int> &nums){
    int lans,rans;
    long long int res = 0;
    for(int i=1;i<n-1;i++){
        lans = -1;
        for(int j=0;j<i;j++){ 
            if(nums[j] < nums[i] )
            {
                if(nums[j] > lans || lans == -1)
                lans = nums[j];
            }
        }
        if(lans == -1)
            continue;
        rans = -1;
        for(int j=i+1;j<n;j++){
            if(nums[j] > nums[i] )
             {
                 if(nums[j] > rans || rans == -1)
                rans = nums[j];
             }   
        }
        if(rans == -1)
            continue;
        long long int temp = nums[i]+lans+rans;
        if(res < temp)
            res = temp;
        // res = max(res,temp);
    }
    return res;
}

int main(){
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        long long int ans = maxSumTriplet(n, nums);
        cout << ans << endl;
    }
}
