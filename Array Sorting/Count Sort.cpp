#include <bits/stdc++.h>
using namespace std;

string countSort(int n, string s){
    int len = s.length();
    string res(len,0);
    int count[255]={0};
    for(char c:s){
        count[c]++;
    }
    for(int i=1;i<=255;i++){
        count[i] += count[i-1];
    }
    for(char c:s){  
        res[count[c] - 1] = c;
        count[c]--;
    }
    return res;
}


int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string result = countSort(n, s);
    cout<< result << "\n";
}
