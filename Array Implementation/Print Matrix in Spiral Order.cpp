#include <bits/stdc++.h>
using namespace std;

bool conditionFail(pair<int, int > &pos, vector<vector<int>> &matrix, int &n){
    int x = pos.first, y = pos.second;
    if(x >= n || x < 0 || y >= n || y < 0)
        return true;
    if (matrix[x][y] != 0)
        return true;
    return false;
}  

vector<vector<int > > spiralMatrixII(int n){
    
    vector<vector<int>>res;
    for(int i=0;i<n;i++){
        vector<int>row;
        for(int j=0;j<n;j++){
            row.push_back(0);
        }
        res.push_back(row);
    }

    int fr=0,fc=0,lr=n-1,lc=n-1;
    int val = 1;
    while(1){
        for(int i=fc;i<=lc;i++){
            res[fr][i] = val++;
        }
        fr++;
        for(int i=fr;i<=lr;i++){
            res[i][lc] = val++;
        }
        lc--;
        if(fr>lr || fc>lc)
            break;
         for(int i=lc;i>=fc;i--){
            res[lr][i] = val++;
        }
        lr--;
         for(int i=lr;i>=fr;i--){
            res[i][fc] = val++;
        }
        fc++; 
    }
    return res;

}


int main(){
    int n;
    cin>>n;
    vector<vector<int> > result = spiralMatrixII(n);
    for(auto &row: result){
        for(auto &element: row){
            cout<<element<<" ";
        }
        cout<<"\n";
    } 
}
