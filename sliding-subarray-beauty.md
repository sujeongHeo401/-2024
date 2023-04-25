https://leetcode.com/contest/weekly-contest-342/ranking/2/


java
```
class Solution {
    public int[] getSubarrayBeauty(int[] nums, int k, int x) {
        int n = nums.length, cnt[] = new int[200];
        for(int i = 0; i < n; i++) nums[i] += 100;
        for(int i = 0; i < k; i++) cnt[nums[i]]++;

        int[] res = new int[n-k+1];
        res[0] = f(cnt, x);
        for(int i = k;i<n;i++){
            cnt[nums[i]]++;
            cnt[nums[i-k]]--;
            res[i-k+1] = f(cnt, x);
        }
        return res;
    }

    int f(int[] cnt, int x){
        int cur = 0;
        for(int i = 0; i < 100; i++){
            cur += cnt[i];
            if(cur >= x) return i - 100;
        }
        return 0;
    }
}
```

다른 풀이 

```
class Solution {
    private int getMin(TreeMap<Integer, Integer> map, int x){
        int smallest = 0;
        for(Integer val: map.keySet()){
            if(val < 0){
                smallest += map.get(val);
            }else{
                return 0;
            } 
            if(smallest >= x){
                return val;
            }
        }
        return 0;
    }
    public int[] getSubarrayBeauty(int[] nums, int k, int x) {
        TreeMap<Integer, Integer> map = new TreeMap<>();
        int n = nums.length;
        int[] ans = new int[n-k+1];
        for(int i = 0; i < k;i++){
            map.put(nums[i], map.getOrDefault(nums[i], 0)+1);
        }
        ans[0] = getMin(map, x);
        for(int i = k; i < n; i++){
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
            map.put(nums[i-k], map.getOrDefault(nums[i-k], 0) -1);
            if(map.get(nums[i-k])==0){
                map.remove(nums[i-k]);
            }
            ans[i-k+1] = getMin(map, x);
        }
        return ans; 
    }
}
```


c++ 친구 답 베낌
```
class Solution {
    int s[55];
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n=nums.size(),i,j,l;
        for(i=0;i<n;i++)if(nums[i]>=0)nums[i]=0;
        else nums[i]=-nums[i];
        for(i=0;i+1<k;i++)s[nums[i]]++;
        vector<int> ans;
        for(;i<n;i++)
        {
            s[nums[i]]++;
            for(j=0,l=k-x+1;l>s[j];j++)l-=s[j];
            ans.push_back(-j);
            s[nums[i-k+1]]--;
        }
        return ans;
    }
};
```
