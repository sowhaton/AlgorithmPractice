#include <iostream>
using namespace std;

//P1590 输出两位的巧数 

int main() {

	int num1,num2;

	
	for(int i = 10; i<=99;i++) {
		num1 = i/10;
		num2 = i%10;
		if((num1 + num2 + (num1*num2)) == i) {
			cout << i << "\n";
		}
		
	}

    return 0;
}

