using System;

public class Solution {
    public int solution(int[] array) {
        int answer = 0;
        int cnt = 1;
        int max_cnt = 0;
        
        Array.Sort(array);
        
        for (int i=0; i<array.Length-1; i++){
            if (array[i] == array[i+1]){
                cnt++;
            }else{
                if (cnt > max_cnt){
                    max_cnt = cnt;
                    answer = array[i];
                }else if (cnt == max_cnt){
                    answer = -1;
                }
                cnt = 1;
            }
        }
        
        if (cnt > max_cnt){
            answer = array[array.Length-1];
        }else if (cnt == max_cnt){
            answer = -1;
        }
        
        return answer;
    }
}