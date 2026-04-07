#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int pro = 1;
    int sum = 0;
    
    for(int i : num_list){
        pro *= i;
        sum += i;
    }
    
    return (pro < sum * sum ? 1 : 0);
}