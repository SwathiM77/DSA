#include <bits/stdc++.h>
using namespace std;

class ValidParenthesis 
{
	public:
		// Implement your solution here
		string isValid(string s) 
		{
			stack<char> st;
			for(int i=0;i<s.length();i++){
				if(st.empty())
				{
					st.push(s[i]);
				}
				else if((s[i]==')' && st.top()=='(') || 
					    (s[i]==']' && st.top()=='[') ||
				 		(s[i]=='}' && st.top()=='{')){
							 st.pop();
				}
				else{
					st.push(s[i]);
				} 
			}
			if(st.empty())
				return "true";
			return "false";
		}
};

int main() {
	string s;
	getline(cin, s);
	string result = ValidParenthesis().isValid(s);
	cout << result;
	return 0;
}
