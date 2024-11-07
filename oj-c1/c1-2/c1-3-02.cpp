#include <iostream>
using namespace std;

//P1669 比较长度  

int main() {
	
	
	char c1,c2;
	int  L1 = 0,L2 = 0;

	while(cin >> c1) {
		L1++;
		if(c1 == '#') {
			L1--;
			break;
		}	
	}
	while(cin >> c2) {
		L2++;
		if(c2 == '#') {
			L2--;
			break;
		}	
	}
	cout << "L1 = " << L1 << endl;
	cout << "L2 = " << L2 << endl;

    return 0;
}

