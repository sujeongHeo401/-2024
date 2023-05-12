https://practice.geeksforgeeks.org/submission/d1eeb8e8906f34dfa01194e565d0d9ee?pid=714594&user=gjtnwjd40

```


class Solution {
    public int[] findMin(int n, int q, int gain[], int loss[], int query[]){
        ArrayList<Long> profit = new ArrayList<Long>();
        
        for(int i = 0; i < n; i++){
            if(gain[i] >= loss[i]){
              profit.add((long) gain[i] - loss[i]);
            }
        }
    
        Collections.sort(profit, Collections.reverseOrder());
  
        //prefix sum of the profit array
        for(int i = 1; i < profit.size(); i++){
          profit.set(i, profit.get(i-1)+profit.get(i));
        }
                                         
       int ans[] = new int[q];
       Arrays.fill(ans, -1);
       for(int i = 0; i < q; i++){
          if(query[i] == 0){
              ans[i] = 0;
          }
          else {
            int idx = binarySearch(profit, query[i]);
            if(idx != -1){
              ans[i] = idx+1;
            }
          }
      }
      return ans;
  }
  
  public int binarySearch(ArrayList<Long> profit, int key){
    // key == value just greater than query[i]
    int n = profit.size();
    int low = 0, high = n - 1;
    
    if(key > profit.get(n-1)) return -1;
    else if(key <= profit.get(0)) return 0;
    
    while(low <= high){
      int mid = (low + high) / 2;
      if(mid - 1 >= 0 && profit.get(mid - 1) < key && profit.get(mid) >= key)
        return mid;
      else if (key > profit.get(mid))
        low = mid + 1;
      else 
        high = mid - 1;
        
    }
    return -1;
  }
  ```
