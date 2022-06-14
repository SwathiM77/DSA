#include <bits/stdc++.h>
#include "../crio/cpp/io/FastIO.hpp"
#include "../crio/cpp/io/ReadMatrix.hpp"
using namespace std;

class BestTimeToBuyAndSellStocks {
    public:
        // Implement Your Solution Here
        int maxProfit(vector<int>& prices) {
            int profit = 0;
            for(int i=0;i<prices.size()-1;i++){
                if(prices[i]<prices[i+1])
                    profit += prices[i+1] - prices[i];
            }
            return profit;
        }
};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> prices;
    ReadMatrix<int>().OneDMatrix(n, prices);
    int result = BestTimeToBuyAndSellStocks().maxProfit(prices);
    cout << result;
    return 0;
}
