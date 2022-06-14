#include <bits/stdc++.h>
using namespace std;

int multiply(double num,int n){
    double ans = 1.0;
    for(int i=1;i<=n;i++){
        ans = ans*num;
    }
    return ans;
}

int nthRoot(int x, int n){
     double low = 1;
     double high = n;
     double eps = 1e-6;
     while((high-low)>eps){
        double mid = (low+high)/2.0;
        if(multiply(mid,x)<x){
            low = mid;
        }
        else{
            high = mid;
        }
    }
//     cout<<low<<" :low "<<high<<" :high"<<endl;
    int res;
    res = pow(n,(double)(1.0/(double)x));
    return res;
}


int main(){
    int t;
    cin>>t;

    while(t--) {
        int x, n;
        cin>>x>>n;

        int ans = nthRoot(x, n);
        cout<<ans<<endl;
    }
}
