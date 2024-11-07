#include <iostream>
using namespace std;

int main() {

	int n;
	int num,p,t;
	int min = 999999;
	
	
	cin >> n; 

	for(int i = 1; i <= 3; i++) {
		cin >> num;
		cin >> p;
		if(n%num == 0){
			t = (n/num) * p;
		} else {
			t = (n/num + 1) * p;
		}
		if(t < min) {
			min = t;
		}
	}
	
	cout << "min = "   << min;
	





    return 0;
}

