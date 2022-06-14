#include <bits/stdc++.h>
using namespace std;

bool mycomp(string s1,string s2){
    int n1 = s1.length(),n2 = s2.length();
    if(n1 > n2) return false;
    if(n1 < n2) return true;
    int i=0,j=0;
    while( i<n1 ){
        if(s1[i] > s2[i])
            return false;
        if(s1[i] < s2[i])
            return true;
        i++;
    }
    return false;
}

vector<string> numSort(int n , vector<string >& numbers){
    sort(numbers.begin(),numbers.end(),mycomp);
    return numbers;
}


int main(){
    int n;
    cin>>n;
    vector<string > numbers(n);
    for(auto &str:numbers){
        cin>> str;
    }
    vector<string> result = numSort(n, numbers);
    for(auto &str: result){
        cout<< str<<" ";
    }
}
