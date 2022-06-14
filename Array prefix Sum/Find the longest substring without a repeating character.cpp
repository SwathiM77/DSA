#include "../crio/cpp/io/FastIO.hpp"
#include <bits/stdc++.h>
using namespace std;

class LongestSubstringWithoutRepeatingCharacter {
public:
    int lengthOfLongestSubstring(string s) {
        int longestSubstringLength = 0;
        int start=0,end=0;
        if(s.length() == 0) return 0;
        if(s.length() == 1) return 1;
        
        map<char,int>map;
        for(end=0;end<s.length();end++){
            if(map.find(s[end]) != map.end()){
                start = max(map[s[end]]+1,start);
            }
            map[s[end]] = end;
            longestSubstringLength = max(longestSubstringLength,
                    end-start+1);
        }
        return longestSubstringLength;
    }
};

int main() {
    FastIO();
    string s;
    getline(cin, s);
    int result =
        LongestSubstringWithoutRepeatingCharacter().lengthOfLongestSubstring(s);
    cout << result;
    return 0;
}
