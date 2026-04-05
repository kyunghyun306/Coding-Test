#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    int case1 = stoi(to_string(a) + to_string(b));
    int case2 = 2 * a * b;
    
    answer = (case1 > case2 ? case1 : case2);
    
    return answer;
}