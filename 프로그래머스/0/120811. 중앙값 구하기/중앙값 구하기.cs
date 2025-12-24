using System;

public class Solution {
    public int solution(int[] array) {
        int answer = 0;
        int len = array.Length;
        
        Array.Sort(array);
        
        answer = array[len/2];
        
        return answer;
    }
}