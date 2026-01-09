#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int temp = 0;
    
    stringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }
    
    for(string w : words){
        if(w == "Z"){
            answer -= temp;
            continue;
        }
        temp = stoi(w);
        answer += temp;
    }
    
    return answer;
}