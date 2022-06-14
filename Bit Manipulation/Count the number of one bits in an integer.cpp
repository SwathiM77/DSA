#include <bits/stdc++.h>
using namespace std;

int numberOfOneBits(uint32_t n){
    unsigned int count = 0;
    while(n){
        count += n&1;
        n >>= 1;
    } 
    return count;
}


int main(){
    unsigned n;
    cin>>n;

    int ans = numberOfOneBits(n);
    cout<<ans<<endl;
}
