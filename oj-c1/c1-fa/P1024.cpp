#include <iostream>
using namespace std;

int main() {

	int line;
	int x,y,sum=0;
	cin >> line;
	
	for(int i = 1;i<=line;i++){
		cin >> x >> y;
		for(int j = x + 1; j<y;j++) {
			if(j%2 != 0) {
				//cout << "j=" << j << " " ;
				sum += j;
			}
		}
		cout << endl;
	} 
	
	cout << sum;

    return 0;
}

