#include <bits/stdc++.h>
using namespace std;

string subArrayExists(int n , vector<int> arr) 
{ 
    string result;
    unordered_set<int>map;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(map.find(sum) != map.end() || sum == 0 )
            return "Yes";
        map.insert(sum);
    }
    return "No";
} 

int main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        int n;
        cin>>n;
        vector<int > arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        string answer = subArrayExists(n,arr);
        cout<<answer<<"\n";
    }
    return 0;
}
