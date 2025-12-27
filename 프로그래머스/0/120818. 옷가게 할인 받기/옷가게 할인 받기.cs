using System;

public class Solution {
    public int solution(int price) {
        int answer = 0;
        double sale = 0;
        
        if (price >= 500000){
            sale = 0.8;            
        } else if (price >= 300000){
            sale = 0.9;            
        } else if (price >= 100000){
            sale = 0.95;            
        } else{
            sale = 1;
        }
        
        answer = (int)(price * sale);
        
        return answer;
    }
}