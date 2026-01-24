#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    map<string, string> pws;
    for(int i = 0; i < n; i++){
        string site, pw;
        cin >> site >> pw;
        pws[site] = pw;
    }

    for(int i = 0; i < m; i++){
        string need_pw;
        cin >> need_pw;
        cout << pws[need_pw] << '\n';
    }

    return 0;
}