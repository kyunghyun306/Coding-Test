#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int n;
	double sum = 0;
	cin >> n;

	if (n == 0) {
        cout << 0;
        return 0;
    }

	int tm = round(n * 0.15);

	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());
	
	for(int i = tm; i < n - tm; i++){
		sum += arr[i];
	}

	cout << round(sum / (n - (tm * 2)));
	
	return 0;
}