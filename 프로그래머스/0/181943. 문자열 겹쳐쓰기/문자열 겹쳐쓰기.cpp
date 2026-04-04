#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    for(int i = 0; i < my_string.length(); i++){
        if(i >= s && i < s + overwrite_string.length()) answer += overwrite_string[i - s];
        else answer += my_string[i];
    }
    
    return answer;
}