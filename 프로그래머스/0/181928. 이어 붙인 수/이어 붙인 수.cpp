#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int even = 0;
    int odd = 0;
    
    for(int i : num_list){
        (i % 2 ? odd = odd * 10 + i : even = even * 10 + i);
    }
    
    return even + odd;
}