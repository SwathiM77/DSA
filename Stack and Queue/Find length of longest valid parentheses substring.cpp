#include <bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s){
    stack<int>st;
    st.push(-1);
    int maxLen = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(')
            st.push(i);
        else{
            if(st.size()>1){
                st.pop();
                int len = i-st.top();
                maxLen = max(len,maxLen);
            }
            else if(st.size()==1){
                st.pop();
                st.push(i);
            }
        }
    }
    return maxLen;
}


int main(){
    string S;
    cin >> S;
    int ans = longestValidParentheses(S);
    cout << ans;
}
