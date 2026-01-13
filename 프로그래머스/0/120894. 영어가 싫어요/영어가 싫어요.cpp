#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    int cnt = 0;
    string num;
    
    while(cnt < numbers.size()){
        if(numbers[cnt] == 'z'){
            num += '0';
            cnt += 4;
        } else if(numbers[cnt] == 'o'){
            num += '1';
            cnt += 3;
        } else if(numbers[cnt] == 't'){
            if(numbers[cnt+1] == 'w'){
                num += '2';
                cnt += 3;
            }else{
                num += '3';
                cnt += 5;
            }
        } else if(numbers[cnt] == 'f'){
            if(numbers[cnt+1] == 'o'){
                num += '4';
                cnt += 4;
            }else{
                num += '5';
                cnt += 4;
            }
        } else if(numbers[cnt] == 's'){
            if(numbers[cnt+1] == 'i'){
                num += '6';
                cnt += 3;
            }else{
                num += '7';
                cnt += 5;
            }
        } else if(numbers[cnt] == 'e'){
            num += '8';
            cnt += 5;
        } else if(numbers[cnt] == 'n'){
            num += '9';
            cnt += 4;
        }
    }
    
    answer = stoll(num);
    
    return answer;
}