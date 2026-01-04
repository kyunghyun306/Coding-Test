#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 2 * (k - 1);
    
    while(answer > numbers.size()){
        answer -= numbers.size();
    }
    
    return numbers[answer];
}