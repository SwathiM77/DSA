#include "../crio/cpp/io/FastIO.hpp"
#include <bits/stdc++.h>
#include "../crio/cpp/io/ReadMatrix.hpp"
#include "../crio/cpp/io/PrintMatrix.hpp"

using namespace std;


vector<int> mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=0,j=0;
    vector<int>res;
    while(i<m && j<n){
        if(nums1[i]<nums2[j])
        {
            res.push_back(nums1[i]);
            i++;
        }
        else{
            res.push_back(nums2[j]);
            j++;
        }
    }
    while(i<m){
        res.push_back(nums1[i]);
        i++;
    }
    while(j<n){
        res.push_back(nums2[j]);
        j++;
    }
    return res;
}

int main() {
    FastIO();
    int m, n;
    cin >> m >> n;
    vector<int> nums1, nums2;
    ReadMatrix<int>().OneDMatrix(m, nums1);
    ReadMatrix<int>().OneDMatrix(n, nums2);
    vector<int> result = mergeSortedArray(nums1, m, nums2, n);
    PrintMatrix<int>().OneDMatrix(result, " ");
    return 0;
}
