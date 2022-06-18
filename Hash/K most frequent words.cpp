#include<bits/stdc++.h>
using namespace std;

bool comp(pair<string,int>&a, pair<string,int>&b){
   if(a.second < b.second){
      return false;
   }
   else if(a.second == b.second){
      return a.first<b.first;;
   }
   return true;
}

vector<string> frequentWords(vector<string>& words , int k) {
   map<string,int>map;
   vector<pair<string,int>>vec;
   for(int i=0;i<words.size();i++){
      map[words[i]]++;
   }
   for(auto it:map){
      vec.push_back(it);
   }
   sort(vec.begin(),vec.end(),comp);
   vector<string>res;
   int count = 0;
   for(auto itr=vec.begin();itr!=vec.end();itr++){
      if(count > k)
         break;
      if(count < k){
         res.push_back(itr->first);
         count++;
      }
   }
   return res;
}
int main() {
	int n, k;
	cin >> n;
	vector<string> v(n);
	for ( int i = 0; i < n; i++) cin >> v[i];
	cin >> k;
	vector<string> ans = frequentWords(v, k);
	for ( auto it : ans) {
		cout << it << endl;
	}
}
