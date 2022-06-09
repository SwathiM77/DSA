#include <bits/stdc++.h>
using namespace std;
// TODO: Implement this method
int postfixExpression(string s)
{
    stack<int>st;
    int temp;
    for(int i=0;i<s.length();i++){
        if(s[i]-'0'>=0 && s[i]-'0'<=100){
            temp = s[i] - '0';
            if((i!= s.length()-1) && (s[i+1] != ' ')){
                temp = s[i]-'0';
                // cout<<"s[i+1]: "<<s[i+1]<<endl;
                temp = temp*10 + s[i+1]-'0';
                i++;
            }
            // cout<<"0.pushing num: "<<temp<<endl;
            st.push(temp);
        }
        else{
            if(s[i] == '+')
            {
                 int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
                int sum = a+b;
                st.push(sum);
                // cout<<"1.pushing add: "<<sum<<endl;
            }
            else if(s[i] == '-')
            {
                 int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
                int diff = b-a;
                st.push(diff);
                // cout<<"2.pushing diff: "<<diff<<endl;
            }
            else if(s[i] == '*')
            {
                 int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
                int prod = a*b;
                st.push(prod);
                // cout<<"3.pushing prod: "<<prod<<endl;
            }
        }
    }
    if(st.size()==1)
        return st.top();
    int num = 0,i=0;
    while(st.size() != 0){
        num = num + st.top()*pow(10,i);
        st.pop();
        i++;
    }
    return num;
}

// NOTE: Please do not modify this function
int main()
{
    string s;
    getline(cin, s);
    int res = postfixExpression(s);
    cout << res << "\n";
}
