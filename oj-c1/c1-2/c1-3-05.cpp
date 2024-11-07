#include <iostream>
using namespace std;

//P1665 É¾³ý×Ö·û  ¡Ì  
//ÖªÊ¶µã:ÅÐ¶Ï´óÐ¡Ð´×Ö·û

int main() {

	char s;
	char ch;
	//int num ,code;
	int num = 0;
	int code = 0;
	
//	while(cin >> s) {
//		if(s == '#') break;
//		code = int(s);
//		if(code >=48 && code <=57) {
//			num++;
//			continue;
//		}
//		cout << s;
//	} 
//	
//	cout << endl;
//	cout << num;

	//ABCD123efg678#
	while(cin >> s) {
		
		if(s == '#') break;
		
		if(s >='A' && s <='Z') {
			cout << s;
		} else if(s >='a' && s<='z') {
			cout << s;
		} else if(s >='0') {
			num++;
		}
	} 
			
		cout << endl;
		cout << num;

    return 0;
}

