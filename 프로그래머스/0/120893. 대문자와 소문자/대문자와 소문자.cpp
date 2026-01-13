#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char c : my_string){
        if(islower(c)) answer.push_back(toupper(c));
        else answer.push_back(tolower(c));
    }
    return answer;
}