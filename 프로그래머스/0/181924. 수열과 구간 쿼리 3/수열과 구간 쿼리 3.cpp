#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    
    for (const auto& query : queries) {
        int idx_1 = query[0];
        int idx_2 = query[1];
        
        swap(answer[idx_1], answer[idx_2]);
    }
    
    return answer;
}