#include <bits/stdc++.h>
using namespace std;

string similarString(string s1,string s2,int n,int m ,int k){
    int hash1[26]={0},hash2[26]={0};
    for(char c:s1){
        hash1[c-'a']++;
    }
    for(char c:s2){
        hash2[c-'a']++;
    }
    for(int i=0;i<26;i++){
        if(abs(hash1[i] - hash2[i]) > k)
            return "No";
    }
    return "Yes";
}


int main(){
    int testcases;
    cin>>testcases;
    while(testcases--){
        int n,m,k;
        cin>>n>>m>>k;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        string result = similarString(s1,s2,n,m,k);
        cout << result << endl;
    }
}
