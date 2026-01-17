#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    for(int i = 0; i < test_case; i++){
        queue<pair<int, int>> q;
        priority_queue<int> pq;

        int num, target;
        cin >> num >> target;
        for(int j = 0; j < num; j++){
            int val;
            cin >> val;
            q.push({val, j});
            pq.push(val);
        }
        
        int cnt = 1;
        while(!q.empty()){
            int current_val = q.front().first;
            int current_idx = q.front().second;

            if(pq.top() == q.front().first){
                if(q.front().second == target){
                    cout << cnt << '\n';
                    break;
                }else{
                    q.pop();
                    pq.pop();
                    cnt++;
                }
            }else{
                q.pop();
                q.push({current_val, current_idx});
            }
        }
    }

    return 0;
}