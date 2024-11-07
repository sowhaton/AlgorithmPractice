#include <iostream>
using namespace std;

//P1670 大小写字母反转  
//知识点  大小写字符的转换 

int main() {


	char c;
	int code;
	
	while(cin >> c) {
		if(c == '#') break; 
		code = int(c);
		//大写字母 
		if(code >= 65 && code <=90) {
			cout << char(c + 32);
		}
		//小写字母 
		if(code >= 97 && code <=122) {
			cout << char(c - 32);
		}
		
	}



    return 0;
}

