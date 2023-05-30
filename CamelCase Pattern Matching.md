https://practice.geeksforgeeks.org/problems/camelcase-pattern-matching2259/1

java 와 c++ 로 풀어보았다.. 
유투브 풀이 영상과 chatGPT 로 답을 얻은 것이니, 너무 심한 욕은 하지 말자


# 리팩토링 전
JAVA
```
class Solution{
    ArrayList<String> CamelCase(int N,String[] Dictionary,String Pattern){
        //code here
        ArrayList<String> ans = new ArrayList<>();
        for(String word: Dictionary){
            int index = 0;
            String curr = "";
<!--             for(char ch: word.toCharArray()){
                if(ch >= 'A' && ch <= 'Z'){
                    curr += ch;
                    if(curr.equals(Pattern)){
                        ans.add(word);
                        break;
                    }
                }
            } -->
            for(char ch: word.toCharArray()){
                if(ch >= 'A' && ch <= 'Z'){
                    if(ch==Pattern.toCharAt(index)){
                        index++;
                    }
                    else break;
                    if(index==Pattern.length()){
                        ans.add(word);
                        break;
                    }
                }
            }
        }
        if(ans.isEmpty()){
            ans.add("-1");
        }
        
        Collections.sort(ans);
        return ans;
    }
}
```

C++
```
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string> ans;
        for(auto &word:Dictionary){
            int index = 0;
            string curr="";
            for(auto &ch:word){
                if(ch >= 'A' and ch <= 'Z'){
                    if(ch==Pattern[index]){
                        index++;
                    }
                    else break;
                    if(index==Pattern.length()){
                        ans.push_back(word);
                        break;
                    }
                }
            }
        }
        if(ans.size() == 0){
            ans.push_back("-1");
        }
        return ans;
    }
};
```


C+
