#include <bits/stdc++.h>
using namespace std;

bool mycomp(int a,int b){
    int t1 = abs(a);
    int t2 = abs(b);
    return t1<t2;
}

vector<int> sortArrayAbsolute(int n, vector<int>& nums){
    sort(nums.begin(),nums.end(),mycomp);
    return nums;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> result = sortArrayAbsolute(n, nums);
    for (auto &&i : result)
    {
        cout << i << " ";
    }
}
