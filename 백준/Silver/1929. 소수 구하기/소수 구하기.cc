#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> isPrime(m+1, 1);

	for(int i = 2; i <= m; i++){
		if(isPrime[i]){
			if(i >= n) cout << i << '\n';
			for(int j = i + i; j <= m; j += i) isPrime[j] = 0;
		}
	}
	
	return 0;
}