https://leetcode.com/problems/first-completely-painted-row-or-column/submissions/

c++
```
class Solution {
public:
    vector<vector<int>> ans;
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<pair<int, int>> loc(n*m);
        
        for(int i = 0 ; i < m; i++){
            for(int j =0; j < n; j++){
                loc[mat[i][j] - 1] = make_pair(i, j);
            }
        }
        vector<int> r(m), c(n);
        for(int x = 0; x < arr.size(); x++){
            auto[i,j] = loc[arr[x]-1];
            if(++r[i] == n) return x;
            if(++c[j] == m) return x;
        }
        return -1;
    }
};
```
java
```
class Solution {
    public int firstCompleteIndex(int[] arr, int[][] mat) {
        Map<Integer, int[]> nm = new HashMap<>();
        int m = mat.length;
        int n = mat[0].length;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                nm.put(mat[i][j], new int[]{i, j});
            }
        }
        int a[] = new int[m];
        int b[] = new int[n];
        
        for(int i =0; i < arr.length; i++)
        {
            int c[] = nm.get(arr[i]);
            a[c[0]]++;
            b[c[1]]++;
            if(a[c[0]] == n || b[c[1]] == m){
                return i;
            }
        }
        return -1;
        
    }
}
```
