#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(char c : str) cout << (isupper(c) ? char(tolower(c)) : char(toupper(c)));
    
    return 0;
}