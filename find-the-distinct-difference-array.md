https://leetcode.com/problems/find-the-distinct-difference-array/submissions/


c++
```
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int len = nums.size();

        // use unordered_map to store prefix and suffix array
        unordered_map<int, int> prefix, suffix;

        unordered_set<int> left;

        for(int i = 0; i < len; i++){
            left.insert(nums[i]);
            int si = left.size();

            // now store size and index to prefix
            prefix[i] = si;
        }

        //same do for suffix means traverse from right to left and do same above process
        unordered_set<int> right;

        for(int i = len - 1; i >= 0; i--){
            right.insert(nums[i]);
            int pi = right.size();

            suffix[i] = pi;
            
        }
        vector<int> ans(len);

        for(int i = 0; i < len - 1; i++){
            int df = prefix[i];
            int df2 = suffix[i+1];
            ans[i] = df-df2;
        }
        ans[len-1] = prefix[len-1];
        return ans;
        
    }
};
```


java
```
class Solution {
    public int[] distinctDifferenceArray(int[] nums) {
        int len =  nums.length;
        
        // use hashMap from to store prefix and suffix array
        HashMap<Integer, Integer> prefix= new HashMap<Integer, Integer>();
        HashMap<Integer, Integer> suffix = new HashMap<Integer, Integer>();

        HashSet<Integer> left = new HashSet<>();
        
        for(int i = 0; i < len; i++){
            left.add(nums[i]);
            int si = left.size();
            
            //now store size and index to prefix
            prefix.put(i, si);
        }
        
        //same do for suffix means traverse from right to left and do same above process
        HashSet<Integer> right = new HashSet<>();
        
        for(int i = len - 1; i >= 0; i--){
            right.add(nums[i]);
            int pi = right.size();
            
            suffix.put(i, pi);
        }
        
        int ans[] = new int[len];
        
        for(int i = 0; i < len -1; i++){
            int df = prefix.get(i);
            int df2 = suffix.get(i+1);
            ans[i] = df-df2;
            
        }
        ans[len - 1] = prefix.get(len-1);
        return ans;
        

        
    }
}
```
