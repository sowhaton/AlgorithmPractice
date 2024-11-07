#include <iostream>
using namespace std;

//P1618 判断素数 √  优化下代码 

int main() {

	int n;
	int flag = true;
	cin >> n;
	
	for(int i = 2; i<n;i++) {
		if(n%2 == 0) {
			flag = false;
			break;
		}
	}

	if(!flag) {
		cout << "no";
	} else {
		cout << "yes";
	}


    return 0;
}

