#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> A){
    vector<int> ans(A.size(),-1);
    if(A.size() == 0) return A;
    stack<int>st;
    st.push(0);
    for(int i=1;i<A.size();i++){
        while(!st.empty() && (A[i] < A[st.top()]) ){
          int top = A[st.top()];
          ans[st.top()] = A[i];
          st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    vector<int> result = nextSmallerElement(A);
    for (auto i : result)
    {
        cout << i << " ";
    }
}
