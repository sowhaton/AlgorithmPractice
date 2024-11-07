#include <iostream>
using namespace std;

//P1671 计算输入值的和  easy

int main() {
	
	int num;
	int sum = 0;
	
	while(cin >> num) {
		if(num == 0) break;
		
		sum +=num;
	}

	cout << sum;

    return 0;
}

