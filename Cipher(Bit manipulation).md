* 문제 링크 (问题 链接)
https://www.hackerrank.com/challenges/cipher/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign



C++ 풀이
```

string cipher(int k, string s) {
    int i, j;
    vector<int> a(s.length() - k + 1);
    a[0] = s[0] - '0'; // equal to first value 
    for(i = 1; i < k; i++)
    {
        a[i] = (s[i-1] - '0') ^ (s[i] - '0');
    }
    int l, flag, p=1;
    for(j=i;j<a.size();j++)
    {
        flag = 0;
        for(l=p;l<p+k-1;l++)
        {
            flag= flag ^(a[l]);
        }
        a[j] = flag ^ (s[j] - '0');
        p++;
    }
    string temp="";
    for(i=0; i< a.size(); i++){
        temp += (char)(a[i] + 48);
    }
    return temp;
    
}
```

JAVA 풀이
```

class Result {

    /*
     * Complete the 'cipher' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. INTEGER k
     *  2. STRING s
     */

    public static String cipher(int k, String s) {
    
    int i, j;
    int [] a = new int[s.length() -k + 1];
    a[0] = s.charAt(0) - '0'; // equal to first value 
    for(i = 1; i < k; i++)
    {
        a[i] = ( s.charAt(i-1) - '0') ^ ( s.charAt(i) - '0');
    }
    int l, flag, p=1;
    for(j=i;j<a.length;j++)
    {
        flag = 0;
        for(l=p;l<p+k-1;l++)
        {
            flag= flag ^(a[l]);
        }
        a[j] = flag ^ ( s.charAt(j) - '0');
        p++;
    }
    String temp="";
    for(i=0; i< a.length; i++){
        temp += (char)(a[i] + 48);
    }
    return temp;

    }

}
```

참고 : https://www.youtube.com/watch?v=AYk8H7EtjX4   ❤️🌤️👍
