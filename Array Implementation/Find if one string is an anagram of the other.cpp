#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"

using namespace std;

class ValidAnagram {
    public:
        bool validAnagram(string s, string t) {
            if(s.length()!=t.length()) return false;
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i=0;i<s.length();i++){
                if(s[i]!=t[i])
                    return false;
            }
            return true;
        }
};

int main() {
    FastIO();
    string s, t;
    getline(cin, s);
    getline(cin, t);
    bool result = ValidAnagram().validAnagram(s, t);
    cout<< boolalpha << result;
    return 0;
}
