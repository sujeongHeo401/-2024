

## Geekina and Log
https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-100/problems/


java
```


//User function Template for Java

class Solution{
    public int[] checkIfPossible(int n){
        
        if(n > 47) return new int[]{-1};
        
        for(int i = 0; i < 30; i++){ // power of 2
            for(int j = 0; j < 19; j++){ // power of 3
                if(i + j == n){
                    int a = (int)Math.pow(2, i);
                    int b = (int)Math.pow(3, j);
                    
                    double  val = log(a,2) + log(b, 3);
                    if(Math.abs(n - val) < 1e-6){
                        return new int[]{a, b};
                    }
                }
                
            }
            
        }
        return new int[]{-1};
        // Code Here.
    }
    
    public double log(int a, int base){
        return Math.log(a) / Math.log(base);
    }
}
```

c++
```
class Solution {
  public:
    vector<int> checkIfPossible(int n) {
        vector<int> ans;
        
        if(n > 47){
            return {-1};
        }
        
        for(int i = 0; i < 30; i++){ // power of 2
            for(int j = 0; j < 19; j++){ // power of 3
                if(i + j == n){
                    int a = pow(2, i);
                    int b = pow(3, j);
                    
                    double val = log(a) / log(2) + log(b) / log(3);
                    if(abs(n-val) < 1e-6){
                        return {a, b};
                    }
                }
            
            }
        }
        
        return {-1};
    
        // code here
    }
};
```
