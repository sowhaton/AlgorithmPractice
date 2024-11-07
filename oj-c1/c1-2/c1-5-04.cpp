#include <iostream>
using namespace std;

//P1589 ผฆอรอฌมý 

int main() {
	
	int n, m,z;
	
	cin >> n >> m;
	

	for(int i = 1; i<=n; i++) {
		z = i*2 + (n-i) * 4;
		if(z == m) {
			cout <<i << " " <<  n -i  ;
			break;
		}
		
	}





    return 0;
}

