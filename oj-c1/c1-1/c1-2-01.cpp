#include <iostream>
using namespace std;

int main() {
	int n; 
	int sum = 0;
	int i = 1,j = 0;
	cin >> n;
	 
	// 1     1     1 
	// 2     3   
	// 4     7
	while (sum < n) {
		sum += i;
		cout << "start:i = " << i <<endl;
		cout << "sum = " << sum <<endl;
		i = i * 2;
		
		cout << "next:i  =" << i <<endl;
		if ( sum <= n) {
			j++;
		}
		
		cout << "j =" << j <<endl;
	}

	cout << j;		


    return 0;
}

