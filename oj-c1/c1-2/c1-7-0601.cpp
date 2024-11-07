#include <iostream>
using namespace std;

//P1600 找最大的因数   从最小的开始找，直到找到最大的 

int main() {
	
	int n ;
	int max = 0;
	cin >> n;
	
	for(int i = 1 ;i<n;i++) {
		
		if(n%i == 0) {
			if(i > max) max = i;
		}
	}


	cout << max;


    return 0;
}

