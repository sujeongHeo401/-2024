https://practice.geeksforgeeks.org/problems/power-set4302

```
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    int i, j, idx;
		    vector<string> ans;
		    int n = s.size();
		    
            for(i = 0; i < (1<<n); i++){
                string tmp_str = "";
                for(j = 0; j < n; j++){
                    if(i & (1<<j)){
                        tmp_str += s[j];    
                    }
                }
                if(tmp_str.size())
                    ans.push_back(tmp_str);          
            }
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};
```
