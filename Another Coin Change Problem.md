https://practice.geeksforgeeks.org/problems/09b910559335521654aa2909f86f893447d8f5ba/1



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
