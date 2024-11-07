#include <iostream>
using namespace std;

//P1662 不等式问题 √

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

