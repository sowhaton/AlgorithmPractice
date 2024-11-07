#include <iostream>
using namespace std;

//P1600 找最大的因数  最大的因数一定小于等于n/2 

int main() {

	int n,max;
	cin >> n;
	
	for(int i = 1; i<= n/2;i++) {
		
		if(n%i == 0) {
			if(i > max) max = i; 
		} 
	}

	cout << max;


    return 0;
}

