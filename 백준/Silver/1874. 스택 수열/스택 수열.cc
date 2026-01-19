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