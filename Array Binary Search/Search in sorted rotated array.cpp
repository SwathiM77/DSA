#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/PrintMatrix.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
#include <bits/stdc++.h>
using namespace std;

int findpivot(vector<int>nums){
    int start = 0,end = nums.size()-1;
    while(start<end){
        int mid = (start + end)/2;
        if(nums[0] <= nums[mid]){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int binarySearch(vector<int>arr,int start,int end,int k){
	int mid = start + (end - start)/2;
	while(start<=end){
		if(arr[mid] == k)
			return mid;
		else if(arr[mid] <k)
			start = mid+1;
		else
			end = mid -1;
		mid = start + (end - start)/2;
	}
		return -1;
}

class SearchInRotatedSortedArray {
  public:
    int search(vector<int>& nums, int target) {
        // Your implementation goes here
        int start = 0, end = nums.size()-1;
        int pivot = findpivot(nums);
        if(nums[pivot] == target)
            return pivot;
        if(nums[pivot]<=target && target<=nums[end]){
            return binarySearch(nums,pivot,end,target);
        }
        else{
            return binarySearch(nums,0,pivot,target);
        }
        int ans = -1;
    	return ans;
    }
};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> nums;
    ReadMatrix<int>().OneDMatrix(n, nums);

    int queries;
    cin >> queries;
    for (int i = 0; i < queries; i++) {
        int target;
        cin >> target;
        int result = SearchInRotatedSortedArray().search(nums, target);
        cout << result << "\n";
    }

    return 0;
}
