#include <bits/stdc++.h>
using namespace std;

bool matches(int count1[],int count2[]){
	for(int i=0;i<26;i++){
		if(count1[i]!=count2[i])
			return false;
	}
	return true;
}

vector<int> findAnagrams(string s, string p){
	int countP[26]={0},countS[26]={0};
	for(char c:p){
		countP[c-'a']++;
	}
	vector<int>res;
	for(int i=0;i<p.size();i++){
		countS[s[i]-'a']++;
	}
	if(matches(countP,countS)){
		res.push_back(0);
	}
	for(int i=p.size();i<s.size();i++){
		countS[s[i]-'a']++;
		countS[s[i-p.size()]-'a']--;
		if(matches(countP,countS)){
			res.push_back(i-p.size()+1);
		}
	}
	return res;
}

int main()
{
	string s, p;
	cin >> s >> p;
	vector<int> answer = findAnagrams(s, p);
	cout << answer.size() << "\n";
	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << " ";
	}
	return 0;
}
