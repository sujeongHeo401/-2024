* Bit manipulation
* https://www.hackerrank.com/challenges/counter-game/problem

```
class Result {

    /*
     * Complete the 'counterGame' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts LONG_INTEGER n as parameter.
     */

    public static String counterGame(long n) {
        int count = 0; 
        while(n > 1){
            if(n == 1){
                break;
            }
            if(checkIsTwo(n)){
                n /= 2;
                count++;
            }
            else {
                n = n - nearestPower(n);
                count++;
                if (n == 1){
                    break;
                }
            }
        }
        // Write your code here
        if(count == 0){
            return "Richard";
        }
        if (count % 2 == 0){
            return "Richard";
        }
        return "Louise";
    }
    
    public static boolean checkIsTwo(long m){
        if(m <= 0){
            return false;
        }
        return (m & (m-1)) == 0;
    }

    public static long nearestPower(long n){
        while((n & (n-1)) != 0){ //2의 제곱수가 아닐 동안
            n = n & (n-1); // 2의 제곱수 조건((n & (n-1)) != 0)이 되면 빠져나옴
        }
        return n;
   
    }
}
```
