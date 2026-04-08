#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int last = answer.size() - 1;
    
    (answer[last] > answer[last - 1] ? answer.push_back(answer[last] - answer[last - 1]) : answer.push_back(answer[last] * 2));
    
    return answer;
}