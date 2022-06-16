#include <bits/stdc++.h>
using namespace std;

void reverse(string &s){
    int i=0,j=s.size()-1;
    while(i<j){
        swap(s[i++],s[j--]);
    }
}

string removeAdjacentDuplicates(string s)
{
    string ans;
    stack<char>st;
    if(s.size() == 0 || s.size()==1)
        return s;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(st.empty()){
            st.push(s[i]);
            continue;
        }
        else if(s[i] == st.top()){
            st.pop();
            continue;
        }
        st.push(s[i]);
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(ans);
    return ans;
}

int main()
{

    string s;
    cin >> s;

    string res = removeAdjacentDuplicates(s);

    cout << res << "\n";
}
