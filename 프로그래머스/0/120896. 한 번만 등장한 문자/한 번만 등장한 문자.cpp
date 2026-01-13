#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt[26] = {0, };
    
    for(char c : s){
        cnt[c - 'a']++;
    }
    
    for(char c : s){
        if(cnt[c - 'a'] == 1) answer += c;
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}