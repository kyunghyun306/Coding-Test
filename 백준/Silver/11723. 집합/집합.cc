#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	bool exists[21] = {};
	string cmd;
	int n, num;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> cmd;
		if(cmd == "all" || cmd == "empty"){
			fill(exists, exists + 21, false);
			if(cmd == "all") for(int j = 1; j <= 20; j++) exists[j] = true;
		}else{
			cin >> num;
			if(cmd == "add"){
				exists[num] = true;
			}else if(cmd == "remove"){
				exists[num] = false;
			}else if(cmd == "check"){
				cout << (exists[num]) << '\n';
			}else{
				if(exists[num]) exists[num] = false;
				else exists[num] = true;
			}
		}
	}
}