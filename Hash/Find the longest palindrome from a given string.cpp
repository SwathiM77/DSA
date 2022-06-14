#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(int n, string s)
{
    map<int,int>map;
    int res;
    for(char c:s){
        map[c]++;
    }
    int count=0;
    for(int i=0;i<map.size();i++){
        if(map[i]%2)
            count++;
    }
    res = n-count+1;
    return res;
}

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = longestPalindrome(n, s);
    cout << ans << endl;
}
