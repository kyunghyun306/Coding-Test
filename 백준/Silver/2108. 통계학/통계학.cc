#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v;
	vector<int> m;
	int num, sum = 0;
	int mode, cnt = 1, max_cnt = 0;

	for(int i = 0; i < n; i++){
		cin >> num;
		v.push_back(num);
		sum += num;
	}

	sort(v.begin(), v.end());

	if(n < 2){
		mode = v[0];
	}else{
		for(int i = 0; i < n - 1; i++){
			if(v[i] == v[i + 1]){
				cnt++;
			}else{
				if (cnt > max_cnt){
					max_cnt = cnt;
					m.clear();
					m.push_back(v[i]);
				}else if (cnt == max_cnt){
					m.push_back(v[i]);
				}
				cnt = 1;
			}
		}

		if (cnt > max_cnt){
			m.clear();
			m.push_back(v[n - 1]);
		}else if (cnt == max_cnt){
			m.push_back(v[n - 1]);
		}

		sort(m.begin(), m.end());

		if(m.size() >= 2) mode = m[1];
		else mode = m[0];
	}

	cout << (int)round((double)sum / n) << '\n';
	cout << v[(n / 2)] << '\n';
	cout << mode << '\n';
	cout << v[n - 1] - v[0];

}

// 선생님 코드
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    // 1. 입출력 최적화
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    long long sum = 0; // Overflow 방지

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    // 최빈값 구하기 (정렬된 상태 이용)
    vector<int> modes;
    int max_cnt = 0;
    int current_cnt = 0;

    for(int i = 0; i < n; i++) {
        current_cnt++;
        // 마지막 요소거나 다음 요소와 다를 때
        if (i == n - 1 || v[i] != v[i+1]) {
            if (current_cnt > max_cnt) {
                max_cnt = current_cnt;
                modes.clear();
                modes.push_back(v[i]);
            } else if (current_cnt == max_cnt) {
                modes.push_back(v[i]);
            }
            current_cnt = 0; // 카운트 초기화
        }
    }

	//이미 v vector가 정렬된 후 차례대로 modes vector에 들어가므로 modes vector의 정렬은 불필요한 중복정렬
	//sort(modes.begin(), modes.end());

    int mode = (modes.size() > 1) ? modes[1] : modes[0];

    // 결과 출력
    cout << (int)round((double)sum / n) << '\n'; // 산술평균
    cout << v[n / 2] << '\n';                   // 중앙값
    cout << mode << '\n';                      // 최빈값
    cout << v.back() - v.front() << '\n';      // 범위 (v[n-1] - v[0]과 동일)

    return 0;
}
