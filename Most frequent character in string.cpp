#include <bits/stdc++.h>
using namespace std;

// TODO: Implement this method
pair<int, char> findMostFrequent(string text) {
    int arr[256] = {0};
    int max = 0;
    char ch;
    for(int i=0;i<text.length();i++){
        arr[text[i]]++;
        if(max < arr[text[i]])
        {
            max = arr[text[i]];
            ch = text[i];
        }
        if(max == arr[text[i]]){
            if(text[i]<ch)
            {
                ch = text[i];
            }
        }
    }

    pair<int,char> res;
    res.first=max;
    res.second=ch;
    return res;
    
}

// NOTE: Please do not modify this function
int main(){
    string text;
    getline(cin, text);

    char mostFrequent;
    int frequency;
    
    tie(frequency, mostFrequent) = findMostFrequent(text);
    cout << mostFrequent << " " << frequency << "\n";
}
