#include <bits/stdc++.h>
using namespace std;

class ValidPalindrome {
    public:
        string isPalindrome(string s) {
            if(s.empty()) return "true";
            for(int i=0;i<s.length();i++){
                s[i] = tolower(s[i]);
            }
            int i=0,j=s.length()-1;
            while(i<=j){
                if(!isalnum(s[i]))
                    i++;
                else if(!isalnum(s[j]))
                    j--;
                else if(s[i] == s[j]){
                    i++;
                    j--;
                }
                else{ 
                    return "false";
                }
            }
            return "true";
        }
};

int main() {
    string s;
    getline(cin, s);
    string result = ValidPalindrome().isPalindrome(s);
    cout<<result;
    return 0;
}
