#include <bits/stdc++.h>
using namespace std;

unsigned int reverseBits(unsigned int n) {
	vector<int>arr(32,0);
	int i = 31;
	while(n>0){
		int rem = n%2;
		arr[i--] = rem;
		n=n/2;
	}
	unsigned int ans = 0;
	for(int i=0;i<32;i++){
		unsigned int dig = pow(2,i) * arr[i];
		ans = ans + dig;
	}
	return ans;
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		unsigned int n;
		cin >> n;
		unsigned int ans = reverseBits(n);
		cout << ans << endl;
	}
}
