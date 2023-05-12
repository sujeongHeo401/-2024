////https://practice.geeksforgeeks.org/problems/09b910559335521654aa2909f86f893447d8f5ba/1

```
class Solution {
  public:
    bool rec(int n, int k, int target, vector<int> &coins, vector<vector<int>>&dp){
        //base
        if(target <0 || k < 0){
            return false;
        }
        if(target == 0&&k==0){
                return true;
        }
        
        if(dp[k][target] != -1){
            return dp[k][target];
        }
       //recursive 
        bool ans = false;
        for(int i = 0; i < n; i++){
            ans |= rec(n, k-1, target-coins[i], coins, dp);
        }
       
        return dp[k][target]=ans;
    }
    bool makeChanges(int n, int k, int target, vector<int> &coins) {
        vector<vector<int>> dp(k+5, vector<int>(target+5, -1));
        // code here
        return rec(n, k, target, coins, dp);
    }
    
};
```
