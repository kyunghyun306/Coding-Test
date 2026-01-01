#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> sort_emergency = emergency;
    
    sort(sort_emergency.begin(), sort_emergency.end(), greater<int>());
    
    for(int i : emergency){
        for(int j = 0; j < emergency.size(); j++){
            if (i == sort_emergency[j]){
                answer.push_back(j+1);
            }
        }
    }
    
    return answer;
}