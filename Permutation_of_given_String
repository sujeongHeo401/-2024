```
class Solution {
  public:
    set <string> st;
    void permute(string s, int l, int r){
      if(l == r){
        st.insert(s);
        return;
      }
      //recursive
      for(int i = l; i <= r; i++){
        swap(s[i], s[l]);
        permute(s, l+1, r);
        swap(s[i], s[l]);
      }
    }
    vector<string>find_permutation(string S)
    {
        //Code here there
        permute(S, 0, S.length() - 1);
        vector<string> ans;
        for(auto &lt:st){
          ans.push_back(it);
        }
        return ans;
     }
};

```
  
