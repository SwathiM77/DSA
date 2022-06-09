#include <bits/stdc++.h>
using namespace std;

// TODO: Implement this method
int mostRepeatedTemperature(vector<int> temperatures){
    int res = 0,max = 0,count = 1;
    sort(temperatures.begin(),temperatures.end());
    res = temperatures[0];
    for(int i=0;i<=temperatures.size()-1;i++){
        if(temperatures[i] == temperatures[i+1])
            count++;
        else
            count = 1;
        if(max < count){
            max = count;
            res = temperatures[i];
        }
        else if(max == count){
            if(res<temperatures[i])
            {
                res = temperatures[i];
                // cout<<"res = "<<res<<endl;
            }   
        }          
    }
    return res;
}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    vector<int> temperatures(n);
    for (int i = 0 ; i < n ; ++i) {
        cin >> temperatures[i];
    }

    int result = mostRepeatedTemperature(temperatures);
    cout << result << "\n";
}
