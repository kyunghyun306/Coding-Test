#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer = numbers;
    
    if(direction == "right"){
        int last = answer.back();
        for(int i = answer.size() - 1; i > 0; i--){
            answer[i] = answer[i-1];
        }
        answer[0] = last;
    }else{
        int first = answer[0];
        for(int i = 0; i < answer.size() - 1; i++){
            answer[i] = answer[i+1];
        }
        answer.back() = first;
    }
    
    return answer;
}