class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int n = prices.size();
        // int min = *min_element(prices.begin(), prices.end());
        // if(min == prices[n-1]) return 0;
        // int x = 0 ;
        // for(int i = 0 ; i < n ; i++){
        //     if(prices[i] == min) {x = i; break;}                             good thingking but think about 2,4,1 it fails here 
        // }
        // int max = *max_element(prices.begin() + x, prices.end());
        // return max-min;

        //thinking should be - today is best selling price , what is minimum value i have seen before 
        int min_price = INT_MAX;
        int profit = 0;
        for(auto price : prices){
            min_price = min(min_price , price);                     //optimal approach
            profit = max(profit , price - min_price);
        }
        return profit;
    }
};