#include <iostream>

using namespace std;

int main()
{
	string input[3];
	long long result = 0;

	for(int i = 0; i < 3; i++){
		cin >> input[i];

		if(isdigit(input[i][0])){
			result = stoll(input[i]) + (3 - i);
		}
	}

	if(!(result % 3) && !(result % 5)) cout << "FizzBuzz";
	else if(!(result % 3) && (result % 5)) cout << "Fizz";
	else if((result % 3) && !(result % 5)) cout << "Buzz";
	else cout << result;

	return 0;
}