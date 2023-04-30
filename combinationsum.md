https://leetcode.com/problems/combination-sum/

c++
```
class Solution {
public:
    vector<vector<int>> ans;
    void func(int j, vector<int> arr, int currSum, int target, vector<int> &v){
        if(currSum == target){
            ans.push_back(v);
            return;
        }
        if(currSum > target){
            return;
        }
        for(int i = j; i < arr.size(); i++){
            v.push_back(arr[i]);
            func(i, arr, currSum + arr[i], target, v);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        func(0, candidates, 0, target, v);
        return ans;

        
    }
};
```

java
```
class Solution {
    List<List<Integer>> ans = new ArrayList<>();

    public void func(int j, List<Integer> arr, int currSum, int target, List<Integer> v){
        if(currSum == target){
            ans.add(new ArrayList<>(v));
            return;
        }
        if(currSum > target){
            return;
        }
        for(int i = j; i < arr.size(); i++){
            v.add(arr.get(i));
            func(i, arr, currSum + arr.get(i), target, v);
            v.remove(v.size() - 1);
        }
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<Integer> list1 = new ArrayList<>();
        for(int i : candidates){
            list1.add(i);
        }
        List<Integer> v = new ArrayList<>();
        func(0, list1, 0, target, v);
        return ans;   
    }
}
```
