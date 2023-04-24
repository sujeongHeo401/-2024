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
