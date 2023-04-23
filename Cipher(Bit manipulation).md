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

자바로도 풀어야 하는데 귀찮🥸
