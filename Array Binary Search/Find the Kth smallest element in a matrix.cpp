#include <bits/stdc++.h>
using namespace std;

int smallerThan(int mid,vector<vector<int>>mat){
    int n=mat.size();
    int row = n-1,col = 0,count =0;
    while(row>=0 && col < n){
        if(mat[row][col] > mid )
            row--;
        else{
            count+=row+1;
            col++;
        }
    }
    return count;
}

int kthSmallestElementInMatrix(vector<vector<int>> matrix,int k)
{
    int n=matrix.size(),ans=0;
    int start=matrix[0][0],end=matrix[n-1][n-1];
    while(start<=end){
        int mid = start + (end-start)/2;
        if(smallerThan(mid,matrix) < k){
            start = mid+1;
        }
        else{
            ans = mid;
            end = mid-1;
        }
    }
    return ans;

}

int main()
{
    int n,k;cin>>n>>k;

    vector<vector<int> > matrix(n);
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            int x;cin>>x;
            matrix[i].push_back(x);
        }
    }
    int ans = kthSmallestElementInMatrix(matrix,k);
    cout<<ans<<endl;
}
