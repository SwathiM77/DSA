#include <bits/stdc++.h>
using namespace std;

vector<int> countDistinctElements(int n, int b, vector<int> a){
    unordered_map<int,int>map;
    int count=0;
    vector<int>ans;
    if(b>n) return ans;
    for(int i=0;i<b;i++){
        if(map[a[i]] == 0){
            count++;
        }
        map[a[i]] += 1;
    }
    ans.push_back(count);
    for(int i=b;i<n;i++){
        if(map[a[i-b]] == 1)
            count--;
        map[a[i-b]] -= 1;

        if(map[a[i]] == 0){
            count++;
        }   
        map[a[i]] += 1;
        ans.push_back(count);        
    }
    return ans;
}


int main(){
    int n, b;
    cin>> n >> b;
    vector<int> a(n);
    for(auto &i: a)
        cin>> i;
    vector<int> result = countDistinctElements(n, b, a);
    assert( result.size() == max(0,n - b + 1) );
    for(auto &i: result){
        cout << i << " " ;
    }
}
