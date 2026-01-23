#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, cnt = 0;
    cin >> n >> k;
    vector<int> moneys;

    for(int i = 0; i < n; i++){
        int money;
        cin >> money;
        moneys.push_back(money);
    }

    for(int i = moneys.size() - 1; i >= 0; i--){
        if(k / moneys[i] == 0) continue;
        int temp = cnt;
        cnt += k / moneys[i];
        k = k % moneys[i];
    }

    cout << cnt;

    return 0;
}