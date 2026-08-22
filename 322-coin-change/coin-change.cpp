#include<climits>
#include<algorithm>
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dynp(amount+1);
        if(amount<=0){
            return 0;
        }
        for(int i=1;i<dynp.size();i++){
            dynp[i]=INT_MAX;
            for(int coin:coins){
                if(coin<=i && dynp[i-coin]!=INT_MAX){
                    dynp[i]=min(dynp[i],1+dynp[i-coin]);
                }
            }
        }
        if(dynp[amount]==INT_MAX){
            return -1;
        }else{
            return dynp[amount];
        }
        
    }
};