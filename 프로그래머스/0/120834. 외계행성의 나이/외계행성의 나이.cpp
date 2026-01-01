#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    
    for (char c : to_string(age)){
        int num = c - '0';  
        answer += char('a' + num);
    }
    
    return answer;
}