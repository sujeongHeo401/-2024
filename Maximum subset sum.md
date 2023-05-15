https://practice.geeksforgeeks.org/problems/e047b92794316450814b29de56cc9c6ec18371b7/1


```
class Solution {
    static long dp[][];
    static boolean visited[][];
    
    public static long findMaxSubsetSum(int n, int[] arr) {
    
        dp = new long[2][n];
        visited = new boolean[2][n];
        
       return Math.max(fun(arr, n-1, 0), arr[n-1]+fun(arr, n-1, 1));
       
       
    }
    
    public static long fun(int arr[], int n, int prev){
        
        if(n == 0)
            return 0;
       
        if( visited[prev][n] == true) return dp[prev][n];
        
        
        visited[prev][n]=true;
        
        if(prev == 1){
            return dp[prev][n] = Math.max(arr[n-1]+fun(arr, n-1, 1), fun(arr, n-1, 0));
        }
        ///else prev == false
        
        return dp[prev][n] =  arr[n-1]+fun(arr, n-1, 1);
    }
}
```
