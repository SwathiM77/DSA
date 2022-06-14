#include <bits/stdc++.h>
using namespace std;

void reverse(string &s){
    int i=0;int j=s.length()-1;
    while(i<j){
        swap(s[i++],s[j--]);
    }
}

string reverseWordsInAString(string str){
    string ans = "",sub = "";
    int n = str.length();
    int i=0,j=0;
    while(i<n && j<n){
        while(i<n && str[i] == ' ')
            i++;
        j = i+1;
        while(j<n && str[j] != ' ')
            j++;
        sub = str.substr(i,j-i);
        if(ans == "")
            ans = sub;
        else if(ans != "")
            ans = sub + " " + ans;
        i = j+1;
    }
    return ans;
}


int main(){
    string str;
    getline(cin, str);
    cout<<reverseWordsInAString(str);
}
