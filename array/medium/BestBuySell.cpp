#include <iostream>
#include <vector>

using namespace std;

// int maxProfit(vector<int> prices)
// {
//     int ans = 0;

//     for (int i = 0; i < prices.size(); i++)
//     {
//         int maxSell = prices[i];
//         for(int j=i+1;j<prices.size();j++){
//              if (prices[j] > prices[i])
//         {
//             maxSell = max(maxSell, prices[j]);
//         }
//         }

       

//         int profit = maxSell - prices[i];
//         cout << "profit " << profit << endl;

//         ans = max(ans, profit);

//         cout << "ans " << ans << endl;
//         cout << "----------" << endl;
//     }

//     return ans;
// }





int maxProfit(vector<int> prices)
{
   int bestBuy=prices[0];
   int maxProfit=0;

   for(int i=1;i<prices.size();i++){
    if(bestBuy<prices[i]){
        maxProfit = max(maxProfit,prices[i]-bestBuy);
        
    }
    else{
        bestBuy=prices[i];
    }
   }

   return maxProfit;
}

int main()
{
    vector<int> prices = {7,5,3,10};
    cout << maxProfit(prices);
}