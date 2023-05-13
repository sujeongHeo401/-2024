문제링크 : https://practice.geeksforgeeks.org/problems/cbd515a00f6537180d2e66f1ffe11093a128e560/1

```
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        vector<int> suffix(N);
        int ans = 0;
        suffix[N-1] = A[N-1];
        for(int i = N - 2; i >= 0; i--){
            suffix[i] = min(suffix[i+1], A[i]);
        }
        
        int prefix = 0;
        for(int i = 0; i <N-1; i++){
            prefix = max(prefix, A[i]);
            if(prefix + suffix[i+1] >= K){
                ans++;
            }
        }
        
        return ans;
        
        // Code here
    }
};
```
