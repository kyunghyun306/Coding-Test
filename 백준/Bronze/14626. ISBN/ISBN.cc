#include <iostream>
using namespace std;

int main()
{
	string isbn;
	int sum = 0, w;
	cin >> isbn;

	for(int i = 0; i < 13; i++){
		if(isbn[i] == '*'){
			if (i % 2) w = 3;
			else w = 1;
			continue;
		}
		if(i % 2) sum = sum + (3 * (isbn[i] - '0'));
		else sum = sum + (isbn[i] - '0');
	}

	for(int i = 0; i < 10; i++){
		if((w * i + sum) % 10 == 0){
			cout << i;
			break;
		}
	}

	return 0;
}