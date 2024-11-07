#include <iostream>
using namespace std;

//P1601 统计m~n之间的素数个数   oj优化 

int main() {

	int m,n,sum;

	cin >> m >> n;
	
	for(int i = m; i<=n;i++) {
	
		bool flag = true;
		
		for(int j = 2; j < i;j++) {
			if(i%j == 0) {
				flag = false;
				break;
			}
			
		}
		if(flag) {
			sum++;
		}
	}


	cout << sum;


    return 0;
}

