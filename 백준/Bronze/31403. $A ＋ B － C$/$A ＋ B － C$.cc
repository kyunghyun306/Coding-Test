#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
    cin >> A >> B >> C;

    int result1 = A + B - C;
    int result2 = stoi(to_string(A) + to_string(B)) - C;



    cout << result1 << "\n";
    cout  << result2;
    
	return 0;
}