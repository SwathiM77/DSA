#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
#include "../crio/cpp/io/PrintMatrix.hpp"

using namespace std;

class TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n = nums.size();
        unordered_map<int,int>map;
        for(int i:nums)
            map[i]++;
        for(int i=0;i<nums.size();i++){
            int req = target - nums[i];
            if(map.find(req) != map.end())
            {
                // cout<<map[req]<<" : index in map\n";
                v.push_back(i);
                cout<<" "<<i<<endl;
            }
        }
        return v;
    }
};

int main() {
    FastIO();
    int n, target;
    cin >> n;
    vector<int> nums;
    ReadMatrix<int>().OneDMatrix(n, nums);
    cin >> target;
    vector<int> result = TwoSum().twoSum(nums, target);
    PrintMatrix<int>().OneDMatrix(result, " ");
    return 0;
}
