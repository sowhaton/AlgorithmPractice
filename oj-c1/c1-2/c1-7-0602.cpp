#include <iostream>
using namespace std;

//P1600 找最大的因数   从最大的开始找，找到即是 

int main() {
	
	int n;
	cin >> n;
	
	for(int i =n-1;n>1;i--) {
		if(n%i ==0) {
			cout << i;
			break;
		}
	} 

    return 0;
}

