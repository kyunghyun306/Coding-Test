#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	stack<int> s;
	vector<int> v(n);
	vector<char> result;

	int current_idx = 0;
	char p = '+';
	char m = '-';

	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	for(int i = 1; i <= n; i++){
		s.push(i);
		result.push_back(p);

		while(!s.empty() && current_idx < n && s.top() == v[current_idx]){
			s.pop();
			current_idx++;
			result.push_back(m);
		}
	}

	if(s.empty()) for(char c : result) cout << c << '\n';
	else cout << "NO";
	
	return 0;
}


// 프로그래밍 선생님의 추천 답안
// #include <iostream>
// #include <stack>
// #include <vector>

// using namespace std;

// int main() {
//     // 입출력 가속
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     stack<int> s;
//     vector<char> result;
//     int next_push_value = 1; // 다음에 push할 값

//     for (int i = 0; i < n; i++) {
//         int target;
//         cin >> target;

//         // target을 꺼내기 위해 필요한 만큼 push
//         while (next_push_value <= target) {
//             s.push(next_push_value++);
//             result.push_back('+');
//         }

//         // 스택의 top이 target이면 pop, 아니면 불가능한 수열
//         if (!s.empty() && s.top() == target) {
//             s.pop();
//             result.push_back('-');
//         } else {
//             cout << "NO\n";
//             return 0; // 즉시 종료
//         }
//     }

//     // 결과 출력
//     for (char c : result) cout << c << '\n';

//     return 0;
// }
