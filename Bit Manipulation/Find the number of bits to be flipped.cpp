#include<bits/stdc++.h>
using namespace std;

int countConversionBits(long long a, long long b) {
     int flips = 0;
     while(a>0 || b>0){
          int t1 = (a&1);
          int t2 = (b&1);
          if(t1!=t2)
               flips++;
          a >>= 1;
          b >>= 1;
     }
     return flips;
}

int main() {
	long long a , b;
	cin >> a >> b;
	int answer = countConversionBits(a, b);
	cout << answer;
	return 0;
}
