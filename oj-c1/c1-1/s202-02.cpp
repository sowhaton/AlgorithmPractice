#include <iostream>
using namespace std;

int main() {
	int i = 1;
	double s;
	double sum = 2.0; 
	double y = 1;
	cin >> s;
	while(true) {
		
		if(i > 1) {
			for(int j = 1; j<i;j++) {
				cout << "j= " << j << endl;
				y = y*0.98;
			}
			cout << "2y=" << 2*y << endl;
			sum = sum + 2*y;
				
		} 
		cout << "sum=" << sum << endl << endl;
		
		
		if(sum >= s) {
			cout << endl;
			cout << i;
			break;
		}
		i++;	
	}

    return 0;
}

