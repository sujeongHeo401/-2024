https://practice.geeksforgeeks.org/problems/prefix-match-with-other-strings/1


1. java 문제 풀이
```
class Solution
{
    public int klengthpref(String[] a, int n, int k, String s)
    {
        if(s.length() < k){
            return 0;
        }
        // System.out.println("s: " + s);
        int c = 0;
        String ss = s.substring(0, k);
        // System.out.println("ss: " + ss);
        for(int i =0; i < n; i++){
            if(a[i].length() < k) continue;
            String x = a[i].substring(0, k);
            // System.out.println("x: " + x);
            if(x.equals(ss)) c++;
        }
        return c;
        // code here
    }
}
```

2. c++ 문제풀이
```
class Solution{   
public:
    int klengthpref(string a[], int n, int k, string s){   
        if(s.size() < k){
            return 0;
        }
        
        int c = 0; 
        string ss = s.substr(0, k);
        for(int i = 0; i < n; i++){
            if(a[i].size() < k) continue;
            string x = a[i].substr(0, k);
            if(x==ss){
                c++;
            }
        }
        return c;
    }
};

```
