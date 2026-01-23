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

// 선생님 코드
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, cnt = 0;
    cin >> n >> k;
    
    vector<int> moneys(n); // 미리 크기를 할당하면 push_back보다 조금 더 빠를 수 있습니다.

    for(int i = 0; i < n; i++){
        cin >> moneys[i];
    }

    // 뒤에서부터(큰 동전부터) 확인
    for(int i = n - 1; i >= 0; i--){
        // 현재 동전으로 만들 수 있는 최대 개수를 더함
		// 어차피 moneys[i]가 더 크면 0이 더해지므로 if(k / moneys[i] == 0) continue; 같은 코드는 불필요
        cnt += k / moneys[i];
        // 남은 금액 갱신
        k %= moneys[i];
    }

    cout << cnt;

    return 0;
}
