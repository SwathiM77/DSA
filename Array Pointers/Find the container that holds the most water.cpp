#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/PrintMatrix.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
#include <bits/stdc++.h>
using namespace std;


class ContainerWithMostWater {
  public:
    // Complete the function implementation below
    int maxArea(vector<int>& height) {
        int answer = 0;
        int max1 = 0,max2 = 0;
        int ind1=0,ind2=0,i=0,j=height.size()-1;
        while(i<=j){
            answer = max(answer,(j-i) * min(height[i],height[j]));
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return answer;
    }
};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> height;
    ReadMatrix<int>().OneDMatrix(n, height);
    int result = ContainerWithMostWater().maxArea(height);
    cout << result;
    return 0;
}
