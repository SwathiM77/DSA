#include "../crio/cpp/io/PrintMatrix.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
#include <bits/stdc++.h>
using namespace std;

class RotateImage {
  public:
    void rotateImage(vector<vector<int>>& arr) {
      int n = arr.size();
      for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
          swap(arr[i][j],arr[j][i]);
        }
      }
      for(int i=0;i<n;i++){
        int low = 0,high = n-1;
        while(low<high){
          swap(arr[i][low],arr[i][high]);
          low++;
          high--;
        }
      }
    }
};

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix;
    ReadMatrix<int>().SquareMatrix(n, matrix);
    RotateImage().rotateImage(matrix);
    PrintMatrix<int>().SquareMatrix(matrix);
    return 0;
}
