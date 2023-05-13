https://practice.geeksforgeeks.org/problems/09b910559335521654aa2909f86f893447d8f5ba/1

4번정도 본 풀이 

c++
```
class Solution {
    int dp[101][1001];
  public:

    bool solve(int n, int k, int target, int index,vector<int> &arr){
        if((target == 0 && k != 0) || (target != 0 & k == 0)){
            return 0;
        }
        if(target == 0 && k == 0){
            return 1;
        }
        
        if(index >= n){
            return 0;
        }
        
        if(dp[k][target] != -1){
            return dp[k][target];
        }
        
        if(target >= arr[index]){
            return dp[k][target] = solve(n, k-1, target-arr[index], index, arr) | 
                                solve(n, k, target, index+1, arr);
            
        }else{
            return dp[k][target] = solve(n, k, target, index+1, arr);
        }
        
    }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        memset(dp, -1, sizeof(dp));
        
        return solve(N, K, target, 0, coins);
        //return solve(coins, 0, target, K, N);
    }
};

```

c++

2번정도 본 풀
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





---------참고-----------

그냥 Comments 에 나와있던 다른 풀이

java
```
class Solution {
    public static boolean makeChanges(int N, int K, int target, int[] coins) {
        // code here
        
        boolean[][] dp = new boolean[101][1001];
        dp[0][0]=true;
        for(int k = 1; k <= K; k++){
            for(int t = 0; t <= target; t++){
                if(dp[k-1][t]){
                    for(int i = 0; i < coins.length; i++){
                        dp[k][t + coins[i]] = true;
                     }
                }
            }
        }
        return dp[K][target];
    }
}
```


c++
```
class Solution {
  public:
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        // bool dp[101][1001];
        vector<vector<bool>> dp(101, vector<bool>(1001, false));
        
        dp[0][0] = true;
        for(int k = 1; k <= K;k++){
            for(int t = 0; t <= target; t++){
                if(dp[k-1][t]){
                    for(int i = 0; i < coins.size(); i++){
                        dp[k][t+coins[i]] = true;
                    }
                }
            }
        }
        return dp[K][target];
    }
};
```
