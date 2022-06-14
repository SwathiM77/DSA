#include<bits/stdc++.h>
using namespace std;
int firstUniqueInteger(vector<int> &v) {
	int result=-1;

	map<int,int>m;
	for(int i:v){
		m[i]++;
	}
	for(int i=0;i<v.size();i++){
		if(m[v[i]] == 1)
			return v[i];
	}
	return result;
}
int main() {
	int n, m;
	cin >> n;
	vector<int> v(n);
	for ( int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int ans = firstUniqueInteger(v);
	cout << ans << endl;
}
