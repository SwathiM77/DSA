#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"

using namespace std;

class ReverseInteger {
    public:
        int reverse(int x) {
            int rev = 0;
            if(x>=INT_MAX || x<= INT_MIN) return 0;
            while(x!=0){
                int dig = x%10;
                x=x/10;
                if((rev-dig)>=INT_MAX/10 || (rev-dig)<=INT_MIN/10)  
                    return 0;
                rev = rev*10 + dig;
            }
            return rev;
        }
};

int main() {
    FastIO();
    int n;
    cin >> n;
    int result = ReverseInteger().reverse(n);
    cout << result;
    return 0;
}
