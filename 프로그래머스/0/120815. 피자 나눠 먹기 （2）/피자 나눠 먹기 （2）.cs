using System;

public class Solution {
    public int GCD(int a, int b){
        if (b > a){
            int temp = a;
            a = b;
            b = temp;
        }
        
        if (a % b == 0){
            return b;
        }
        return GCD(b, a%b);
    }
    
    public int solution(int n) {
        int answer = 0;
        int gcd = GCD(n, 6);
        int lcm = (n * 6) / gcd;
        
        answer = lcm / 6;
        return answer;
    }
}