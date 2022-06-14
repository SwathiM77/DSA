#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>&v){
   int i=0,j=v.size()-1;
   while(i<j){
    swap(v[i],v[j]);
    i++;
    j--;
    }
}
vector<int> incrementNumber(int n, vector<int > A){
    reverse(A);
    vector<int> vec;
    int carry = 1, rem = 0, dig;
    for(int i=0;i<n;i++){
        dig = carry + A[i];
        rem = dig%10;
        carry = dig/10;
        vec.push_back(rem);
    }
    if(carry)
        vec.push_back(carry);
    reverse(vec);
    return vec;
}


int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &i : A)
    {
        cin >> i;
    }
    vector<int> result = incrementNumber(n, A);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
}
