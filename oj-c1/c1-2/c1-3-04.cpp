#include <iostream>
using namespace std;

//P1664 �ַ�ͳ�� ��
 
int main() {

	char search;
	char s;
	int num = 0;
	
	cin >> search;
	while(cin >> s) {
		if(s == search) {
			num++; 
		}
		if(s == '#') break;
	} 


	cout << num;



    return 0;
}

