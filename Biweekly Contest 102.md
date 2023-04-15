
https://leetcode.com/contest/biweekly-contest-102/


- 4문제 중에 1개 풀... 김장하자.🥁🥁


2639. Find the Width of Columns of a Grid

```
class Solution {
    public int[] findColumnWidth(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int[] a = new int[n];
        for(int j = 0; j < n; j++){
            int max = 0;
            for(int i = 0; i < m; i++){
                max = Math.max(max, Integer.toString(grid[i][j]).length());   
            }
            a[j] = max;
        }
        
        return a;
    }
}
```

