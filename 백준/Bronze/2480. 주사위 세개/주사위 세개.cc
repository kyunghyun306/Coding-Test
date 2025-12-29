#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

    int prize;

	if (a == b && a == c){
		prize = 10000 + (a * 1000);
		cout << prize;
	} else if (a == b  || a == c){
		prize = 1000 + (a * 100);
		cout << prize;
	} else if (b == c){
		prize = 1000 + (b * 100);
		cout << prize;
	} else {
		int maxVal = max(a, max(b, c));
		prize = maxVal * 100;
		cout << prize;
	}
	return 0;
}