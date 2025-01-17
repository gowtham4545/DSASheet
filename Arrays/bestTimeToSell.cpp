// 121. Best Time to Buy and Sell Stock

/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,maxVal,n=prices.size();
        maxVal=prices[n-1];
        for(int i=n-2;i>=0;i--){
            if(prices[i]>maxVal)maxVal=prices[i];
            else maxProfit=max(maxProfit,maxVal-prices[i]);
        }
        return maxProfit;
    }
};

int main()
{
    Solution s;
    
    return 0;
}