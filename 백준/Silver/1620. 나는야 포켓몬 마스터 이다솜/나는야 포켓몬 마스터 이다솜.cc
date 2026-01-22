#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	string name, quize;
	vector<string> num_to_name(n + 1);
	map<string, int> name_to_num;

	for(int i = 1; i <= n; i++){
		cin >> name;
		num_to_name[i] = name;
		name_to_num[name] = i;
	}

	for(int i = 0; i < m; i++){
		cin >> quize;
		if(isdigit(quize[0])){
			cout << num_to_name[stoi(quize)] << '\n';
		}else{
			cout << name_to_num[quize] << '\n';
		}
	}

	return 0;
}