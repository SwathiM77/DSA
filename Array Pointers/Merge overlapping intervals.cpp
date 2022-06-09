#include <bits/stdc++.h>
#include "../crio/cpp/io/PrintMatrix.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"

using namespace std;

bool comparator(vector<int>a,vector<int>b){
    if(a[0] != b[0])
      return a[0]<b[0];

      return a[1]<b[1];
  }

  void reverse(vector<vector<int>>&res){
    int i=0;
    int j=res.size()-1;
    while(i<j){
      swap(res[i++],res[j--]);
    }
  }

class MergeIntervals {
  public:
  
    vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
      vector<vector<int>>res;
      sort(intervals.begin(),intervals.end(),comparator);
      
      stack<vector<int>>st;
      st.push(intervals[0]);
      int n = intervals.size();
  
      for(int i=1;i<n;i++){
        vector<int>temp = st.top();
        if( intervals[i][0] <= temp[1] ){
          st.pop();
          temp[1] = max(temp[1],intervals[i][1]);
          st.push(temp);
        }
        else
          st.push(intervals[i]);
      }

      while(!st.empty()){
        vector<int>temp = st.top();
        st.pop();
        res.push_back(temp);
      }
      reverse(res);
      return res;
    }
};

int main() {
    int n;
    cin >> n;
    vector<vector<int>> nums;
    ReadMatrix<int>().TwoDMatrix(n, 2, nums);
    vector<vector<int>> result = MergeIntervals().mergeIntervals(nums);
    PrintMatrix<int>().TwoDMatrix(result);
    return 0;
}
