#include <bits/stdc++.h>
using namespace std;

class FirstMissingPositive {
  public:
    int firstMissingPositive(vector<int> nums) {
        int i = 0,res = 0,ind = 0;
        if(nums.size() == 0) return 1;
        sort(nums.begin(),nums.end());
        while(nums[ind]<=0 && ind < nums.size() ){
            ind++;
        }
        if( ind == nums.size())
            return 1;
        for(i=ind;i<nums.size();i++){
            if(nums[i] != i+1-ind)
                return i+1-ind;
        }
        return nums[i-1]+1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int result = FirstMissingPositive().firstMissingPositive(nums);
    cout << result;
    return 0;
}
