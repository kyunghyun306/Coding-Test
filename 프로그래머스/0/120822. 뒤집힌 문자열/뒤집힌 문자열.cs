using System;

public class Solution {
    public string solution(string my_string) {
        char [] arr = my_string.ToCharArray();
        
        Array.Reverse(arr);
        
        string answer = new string(arr);
        return answer;
    }
}