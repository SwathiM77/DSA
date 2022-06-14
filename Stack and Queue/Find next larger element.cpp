#include <bits/stdc++.h>
using namespace std;

vector<int> nextLargerElement( vector<int>& A) {
    stack<int>st;
    st.push(0);
    vector<int>res(A.size(),-1);
    for(int i=1;i<A.size();i++){
        while(!st.empty() && A[i] > A[st.top()] ) {
            // cout<<"top: "<<st.top()<<" a[i]: "<<A[i]<<endl;
            res[st.top()] = A[i];
            st.pop();
            // i++;
        }
        st.push(i);
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for ( int i = 0; i < n; i++) cin >> A[i];

    vector<int> next_larger = nextLargerElement(A);
    for ( int i = 0; i < n; i++) {
        cout << next_larger[i] << " ";
    }
}
