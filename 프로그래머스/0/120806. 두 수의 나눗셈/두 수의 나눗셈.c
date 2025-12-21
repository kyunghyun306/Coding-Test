#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    
    int div = (num1 / num2) * 1000;
    int mod = (num1 % num2) * 1000 / num2;
    
    answer = div + mod;
    return answer;
}