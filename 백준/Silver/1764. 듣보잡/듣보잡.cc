#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, m;
	set<string> listen;
	vector<string> result;

	cin >> n >> m;

	for(int i = 0; i < n; i++){
		string name_listen;
		cin >> name_listen;
		listen.insert(name_listen);
	}

	for(int i = 0; i < m; i++){
		string name_see;
		cin >> name_see;
		if(listen.count(name_see)) result.push_back(name_see);
	}

	sort(result.begin(), result.end());

	cout << result.size() << '\n';
	for(const string& s : result){
		cout << s << '\n';
	}

	return 0;
}