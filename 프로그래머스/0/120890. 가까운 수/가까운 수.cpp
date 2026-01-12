#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0, temp = 0;
    sort(array.begin(), array.end());
    
    for(int i = 0; i < array.size(); i++){
        if(array[i] == n || (i == 0 && array[i] >=n) ){
            answer = array[i];
            break;
        }
        
        if(array[i] < n){
            temp = n - array[i];
        }
        
        if(array[i] > n){
            if(array[i] - n < temp) answer = array[i];
            else answer = array[i-1];
            break;
        }
        
        if(i == array.size() - 1 && array[i] < n) answer = array[i];
        
    } 
    
    return answer;
}