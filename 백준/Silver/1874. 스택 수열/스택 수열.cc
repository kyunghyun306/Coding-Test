#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 프로그래밍 선생님의 추천 답안
int main() {
    // 입출력 가속
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<int> s;
    vector<char> result;
    int next_push_value = 1; // 다음에 push할 값

    for (int i = 0; i < n; i++) {
        int target;
        cin >> target;

        // target을 꺼내기 위해 필요한 만큼 push
        while (next_push_value <= target) {
            s.push(next_push_value++);
            result.push_back('+');
        }

        // 스택의 top이 target이면 pop, 아니면 불가능한 수열
        if (!s.empty() && s.top() == target) {
            s.pop();
            result.push_back('-');
        } else {
            cout << "NO\n";
            return 0; // 즉시 종료
        }
    }

    // 결과 출력
    for (char c : result) cout << c << '\n';

    return 0;
}