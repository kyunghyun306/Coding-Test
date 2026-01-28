#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> scores(n + 1);
	for(int i = 1; i <= n; i++){
		cin >> scores[i];
	}

	vector<int> max_scores(n + 1);
	max_scores[1] = scores[1];

	if(n >= 2) max_scores[2] = scores[1] + scores[2];

	if(n >= 3) max_scores[3] = max(scores[3] + scores[1], scores[3] + scores[2]);

	if(n >= 4){
		for(int i = 4; i <= n; i++){
			max_scores[i] = max(max_scores[i - 2] + scores[i], max_scores[i - 3] + scores[i - 1] + scores[i]);
		}
	}

	cout << max_scores[n];

	return 0;
}