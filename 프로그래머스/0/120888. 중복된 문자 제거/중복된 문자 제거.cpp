#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    set<char> used_chars;
    
    for(char c : my_string)
    {
        if(!used_chars.count(c))
        {
            used_chars.insert(c);
            answer += c;
        }
    }
    
    return answer;
}