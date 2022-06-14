#include<bits/stdc++.h>
using namespace std;


int lengthOfLongestSubstringKDistinct(string s, int k) {
	int start=0,end=0,maxlen=0,d=0;
	unordered_map<char,int>map;
	for(; start<=end && end<s.length() ;end++){
		if(map.find(s[end]) == map.end() || map[s[end]]<start){
			d++;
			if(d>k){
				while(start<=end && map[s[start]]!=start)
					start++;
				start++;
			}
		}
		
		map[s[end]] = end;
		maxlen = max(maxlen,end-start+1);
	}
	return maxlen;
}

int main() {
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	int answer = lengthOfLongestSubstringKDistinct(s,k);
	cout <<  answer;
	return 0;
}
