#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (const auto& query : queries) {
        int s = query[0];
        int e = query[1];
        int k = query[2];
        
        int min = INT_MAX;
        for(int i = s; i <= e; i++){
            if(arr[i] > k && arr[i] < min) min = arr[i];    
        }
        
        (min == INT_MAX ? answer.push_back(-1) : answer.push_back(min));
    }
    
    return answer;
}