#include<bits/stdc++.h>
using namespace std;

unsigned int swapAllOddAndEvenBits(unsigned int n) {
     unsigned int odd = 0xAAAAAAAA;
     unsigned int even = 0x55555555;
     unsigned int t1 = n&odd;
     unsigned int t2 = n&even;
     t1 = t1>>1;
     t2 = t2<<1;
     unsigned int res = (t1) ^ (t2);
     return res; 
}

int main()
{
	unsigned int n;
	cin >> n;
	unsigned int answer = swapAllOddAndEvenBits(n);
	cout << answer;
	return 0;
}
