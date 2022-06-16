#include <bits/stdc++.h>
using namespace std;

class Solution {

    public:

        vector<int> findFirstAndLastPositionOfElementInSortedArray(vector<int> &nums, int target) {
        	vector<int> result;
            int n = nums.size();
            int start = 0,end = nums.size()-1;
            int first = -1, last = -1;
            while(start<=end){
                int mid = start + (end-start)/2;
                if(nums[mid] > target)
                    end = mid-1;
                else if(nums[mid] < target)
                    start = mid+1;
                else{
                    first = mid;
                    end = mid-1;
                }
            }
            start = 0,end = nums.size()-1;
            while(start<=end){
                int mid = start + (end-start)/2;
                if(nums[mid] > target)
                    end = mid-1;
                else if(nums[mid] < target)
                    start = mid+1;
                else{
                    last = mid;
                    start = mid+1;
                }
            }
            result.push_back(first);
            result.push_back(last);
            return result;
        }
};
