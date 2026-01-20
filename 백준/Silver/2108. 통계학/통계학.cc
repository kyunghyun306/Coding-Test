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