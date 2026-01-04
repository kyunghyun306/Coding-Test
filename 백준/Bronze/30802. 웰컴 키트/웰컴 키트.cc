#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, S, M, L, XL, XXL, XXXL, T, P;
    int clothes, pen_bundle, pen_single;

    cin >> N;
    cin >> S >> M >> L >> XL >> XXL >> XXXL;
    cin >> T >> P;

    clothes = (int)ceil((double)S/T) + (int)ceil((double)M/T) + (int)ceil((double)L/T)+ (int)ceil((double)XL/T) + (int)ceil((double)XXL/T) + (int)ceil((double)XXXL/T);
    pen_bundle = N / P;
    pen_single = N % P;

    cout << clothes << '\n';
    cout << pen_bundle << " " << pen_single;
    
	return 0;
}