#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	bool exists[21] = {};
	string cmd;
	int n, num;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> cmd;
		if(cmd == "all" || cmd == "empty"){
			fill(exists, exists + 21, false);
			if(cmd == "all") for(int j = 1; j <= 20; j++) exists[j] = true;
		}else{
			cin >> num;
			if(cmd == "add"){
				exists[num] = true;
			}else if(cmd == "remove"){
				exists[num] = false;
			}else if(cmd == "check"){
				cout << (exists[num]) << '\n';
			}else{
				if(exists[num]) exists[num] = false;
				else exists[num] = true;
			}
		}
	}
}

// 선생님 코드
#include <iostream>
#include <algorithm> // fill 함수 사용

using namespace std;

bool exists[21]; // 전역 변수로 선언하면 자동으로 false로 초기화됩니다.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    string cmd;
    cin >> n;

    while(n--) { // for문 대신 n을 줄여나가는 방식도 자주 쓰여요.
        cin >> cmd;

        if (cmd == "add") {
            cin >> num;
            exists[num] = true;
        } else if (cmd == "remove") {
            cin >> num;
            exists[num] = false;
        } else if (cmd == "check") {
            cin >> num;
            cout << exists[num] << '\n'; // bool은 출력 시 1(true) 또는 0(false)으로 나옵니다.
        } else if (cmd == "toggle") {
            cin >> num;
            exists[num] = !exists[num]; // if-else 사용할 필요 없이 NOT 연산자로 뒤집기
        } else if (cmd == "all") {
            fill(exists, exists + 21, true); // 전체를 false로 만들고 다시 true로 할 필요 없음
        } else if (cmd == "empty") {
            fill(exists, exists + 21, false);
        }
    }
    return 0;
}
