/* Aim is to buy and sell stocks to make max profit. An array of prices will be given and you have to choose when to buy and sell
in order to make max profit. You cannot buy before selling previous one.  */

/* BRUTE FORCE:
TC is O(N*N) and SC is O(1) */

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
            maxPro = max(arr[j] - arr[i], maxPro);
            }
        }
        }

    return maxPro;
}

/* OPTIMAL SOL:
  TC is O(N) and SC is O(1) */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int maxi=INT_MIN;
    int mini=prices[0];
    int cost=0;
    for(int i=0;i<n;i++)
    {
        cost=prices[i]-mini;
        maxi=max(cost,maxi);
        mini=min(prices[i],mini);
    }
     if(maxi<0) return 0;
    return maxi;
    }
};
