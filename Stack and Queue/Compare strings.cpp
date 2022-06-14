#include <bits/stdc++.h>
using namespace std;

void reverse(string s){
    int i=0,j=s.length()-1;
    while(i<=j){
        swap(s[i++],s[j--]);
    }
}
bool backspaceStringCompare(string S, string T){
    stack<char>st;
    for(char c:S){
        if(c == '#' && !(st.empty())){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    string s1,s2;
    while(!st.empty()){
        s1 += st.top();
        st.pop();
    }
    reverse(s1);
    // cout<<"s1: "<<s1<<endl;
    for(char c:T){
        if(c == '#' && !(st.empty())){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    while(!st.empty()){
        s2 += st.top();
        st.pop();
    }
    reverse(s2);
    if(s1!=s2)
        return false;
    return true;
}

int main(){
    int tests;
    cin >> tests;
    while (tests--) {
        string S, T;
        cin >> S;
        cin >> T;
        bool result = backspaceStringCompare(S, T);
        if (result) {
            cout << "true" << "\n";
        }
        else {
            cout << "false" << "\n";
        }
    }
}
