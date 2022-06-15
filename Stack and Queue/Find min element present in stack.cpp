#include <bits/stdc++.h>
using namespace std;
stack<int> S , minstack;

void push( int x) {
    S.push(x);
}

void pop() {
    if(S.empty())
    return;
    S.pop();
}

int findMin() {
    if(S.empty()) return -1;
    int mini = INT_MAX;
    minstack = S;
    while(!minstack.empty()){
        int top = minstack.top();
        mini = min(top,mini);
        minstack.pop();
    }
    return mini;
}

int main()
{
    int n, m, t;
    cin >> t;
    while (t--) {
        int ch;
        cin >> ch;
        if ( ch  == 1) {
            cin >> n;
            push(n);
        }
        else if ( ch == 2)
            pop();
        else
            cout << findMin() << endl;
    }

}
