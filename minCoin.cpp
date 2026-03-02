#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> coins = {1,2,5};
    int amount = 11;
    vector<int> dp(amount +1, INT_MAX);
    dp[0] = 0;
    for(int i = 1;i<= amount;i++){
        for(int coin : coins){
            if(i - coin >= 0 && dp[i-coin] != INT_MAX){
                dp[i] = min(dp[i], 1+dp[i-coin]);
            } 
        }
    }
    if(dp[amount] == INT_MAX){
        cout<<-1;
    }else{
        cout<<dp[amount];
    }
}