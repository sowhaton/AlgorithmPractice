#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin >> n;
	int max = 0;
	int max_2 = 0;  //  70  80  85  10  15
	for(int i=1;i <= n;i++){
		cin >> m;
		if( m > max) {
			max_2 = max;
			max = m;
		} else {
			if (m > max_2) {
				max_2 = m;	
			}
	
		}
	}
	
	cout <<  max_2;
	return 0;
	
}
