#include <bits/stdc++.h>
using namespace std;

vector<int> twoNonRepeatingNumbers(int arr[], int n){
    sort(arr,arr+n);
    vector<int>res;
    int i=0;
    for(i=0;i<n-1;i++){
        if(arr[i] != arr[i+1]){
            res.push_back(arr[i]);
        }
        else{
            i++;
        }
    }
    if(arr[i-1] != arr[i])
        res.push_back(arr[i]);
    return res;
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>ans=twoNonRepeatingNumbers(arr,n);
    cout<<ans[0]<<" "<<ans[1];

}
