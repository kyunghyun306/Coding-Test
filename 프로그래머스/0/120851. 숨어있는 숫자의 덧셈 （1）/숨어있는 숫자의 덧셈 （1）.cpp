#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(char c : my_string){
        if (isdigit((unsigned char)c)) answer += (c - '0');
    }
    return answer;
}