#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
#include <bits/stdc++.h>
using namespace std;

string numTostring(vector<int>arr){
  string res;
  for(int i:arr){
    res += to_string(i);
  }
  return res;
}

bool mycomp(int i,int j){
  string s1,s2;
  s1 = to_string(i);
  s2 = to_string(j);
  string t1,t2;
  t1 = s1.append(s2);
  t2 = s2.append(s1);
  return t1.compare(t2)>0?1:0;
}

class LargestNumber {
  public:

    string largestNumber(vector<int>& nums) {
      string res;
      sort(nums.begin(),nums.end(),mycomp);
      res = numTostring(nums);
      return res;
    }
};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> nums;
    ReadMatrix<int>().OneDMatrix(n, nums);
    string result = LargestNumber().largestNumber(nums);
    cout << result;
    return 0;
}
