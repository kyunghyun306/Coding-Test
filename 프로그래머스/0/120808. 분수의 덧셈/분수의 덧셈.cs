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
    
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        int[] answer = new int[2];
        
        int numer = (numer1 * denom2) + (numer2 * denom1);
        int denom = (denom1 * denom2);
        
        int gcd = GCD(numer, denom);
        
        answer[0] = numer / gcd;
        answer[1] = denom / gcd;
        
        return answer;
    }
}