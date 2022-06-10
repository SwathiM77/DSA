#include <bits/stdc++.h>
using namespace std;

bool mycomp(int a,int b){
    return a>b;
}

int nextGreaterElementWithSameSetOfDigits(int n){
    vector<int>arr;
    while(n>0){
        int rem = n%10;
        n = n/10;
        arr.push_back(rem);
    }
    if(arr.size() == 1) return -1;
    int ans = 0;
    sort(arr.begin(),arr.end(),mycomp);
    for(int i=0;i<arr.size();i++){
        ans = ans * 10 + arr[i];
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    cout<<nextGreaterElementWithSameSetOfDigits(n);
    return 0;
}

