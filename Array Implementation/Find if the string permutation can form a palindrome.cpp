#include<bits/stdc++.h>
using namespace std;

bool isPermutationPalindrome(string &s) {
	unordered_map<char,int>map;
	for(char c:s){
		if(map.find(c) == map.end() || map[c] == 0)
			map[c] = 1;
		else
			map[c] = 0;
	}
	int count = 0;
	for(auto itr=map.begin();itr!=map.end();itr++)
	{
		if(itr->second==1)
			count++;
	}
	if(s.length()%2 == 0)
		return count==0;
	return count==1;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		bool answer = isPermutationPalindrome(s);
		if(answer) {
			cout << "True\n";
		} else {
			cout << "False\n";
		}
	}
	return 0;
}
