#include <iostream>
#include <utility>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int, int> fibonacci[41];

    fibonacci[0] = {1, 0};
    fibonacci[1] = {0, 1};

    for(int i = 2; i <= 40; i++){
        fibonacci[i].first = fibonacci[i - 1].first + fibonacci[i - 2].first;
        fibonacci[i].second = fibonacci[i - 1].second + fibonacci[i - 2].second;
    }

	int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        cout << fibonacci[n].first << ' ' << fibonacci[n].second << '\n';
    }

	return 0;
}