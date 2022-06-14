#include <bits/stdc++.h>
using namespace std;


long long contigiousSequence( vector<long long > &arr) {
	int i=0;
	int n = arr.size();
	long long presum = 0;
	long long maxsum = INT_MIN;
	for(int j=0;j<n;j++){
		presum += arr[j];
		if(presum < 0)
			presum = 0;
		maxsum = max(maxsum,presum);
	}
	return maxsum;
}

int main()
{
	int n;
	cin >> n;
	vector<long long> arr(n);
	for ( int i = 0; i < n ; i++)  cin >> arr[i];
	long long mx = contigiousSequence(arr);
	cout << mx << endl;
}
