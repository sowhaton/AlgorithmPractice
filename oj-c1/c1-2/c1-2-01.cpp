#include <iostream>
using namespace std;

//P1662 ����ʽ���� ��

int main() {

	int n;
	int sum;
	cin >> n;
	
	for(int i = 1; i<=n;i++) {
		sum += i;
		if(sum >= n) {
			cout << i;
			break;
		}	
	}


    return 0;
}

