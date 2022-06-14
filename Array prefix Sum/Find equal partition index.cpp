#include <bits/stdc++.h>
using namespace std;

int equalPartition(int n, vector<int> arr)
{
    vector<int>presum(n);
    vector<int>sufsum(n);
    presum[0] = 0;
    sufsum[n-1] = 0;
    for(int i=1;i<n;i++){
        presum[i] = presum[i-1] + arr[i-1];
    }
    for(int i=n-2;i>=0;i--){
        sufsum[i] = sufsum[i+1] + arr[i+1];
    }
    for(int i=0;i<n;i++){
        if(presum[i] == sufsum[i])
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el : arr)
    {
        cin >> el;
    }
    int answer = equalPartition(n, arr);
    cout << answer << "\n";
}
