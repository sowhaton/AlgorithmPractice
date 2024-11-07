#include <iostream>
using namespace std;

int main() {

	int n =3;
	//ABCDEFGHIJKLMNOPQRSTUVWXYZ
	// 65 66 67 68 69    90
	for (int i = 1; i <= 26; i++) {
		char ch = 'A' +  (n + i - 1)%26;
	
		cout << (n + i - 1)%26 << endl;
	}
	


    return 0;
}

