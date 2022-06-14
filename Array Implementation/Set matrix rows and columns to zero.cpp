#include <bits/stdc++.h>
using namespace std;

class SetMatrixZeroes {
  public:

    void makenull(vector<vector<int>>&mat,int r,int c){
        if(r!=-1){
        for(int i=0;i<mat[r].size();i++){
            mat[r][i] = 0;
        }
        }
        if(c!=-1){
        for(int i=0;i<mat.size();i++){
            mat[i][c] = 0;
        }
        }
        return;
    }

    void setMatrixZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row[n] = {0};
        int col[m] = {0};

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(row[i] ==1)
            makenull(matrix,i,-1);
        }
        for(int i=0;i<m;i++)
        {
            if(col[i] == 1)
            makenull(matrix,-1,i);
        }
    }
};

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> grid(m,vector<int> (n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    SetMatrixZeroes().setMatrixZeroes(grid);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
