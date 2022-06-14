#include <bits/stdc++.h>
using namespace std;

vector<int> largestSubarraySumZero(int n, vector<int> arr){
    unordered_map<int,int>map;
    int maxlen = 0;
    int start = -1;
    int end = -1;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum == 0){
            int len = i+1;
            if(len > maxlen){
                start = 0;
                end = i;
                maxlen = len;
            }
        }
        else{
            if(map.find(sum) != map.end()){
                int prev = map[sum];
                int length = i - prev;
                if(maxlen < length)
                {
                    start = prev+1;
                    end = i;
                    maxlen = length;
                }
            }
            else
                map[sum] = i;
        }
    }
    vector<int>res;
    if(start == -1 && end == -1){
        res.push_back(-1);
        return res;
    }
    for(int i=start;i<=end;i++){
        res.push_back(arr[i]);
    }
    return res;
}


int main(){
    
    int n;
    cin>>n;

    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }

    vector<int> longestSubarray = largestSubarraySumZero(n, arr);
    
    for(auto i:longestSubarray) {
        cout<<i<<" ";
    }
}
