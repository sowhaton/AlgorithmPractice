#include <iostream>
using namespace std;

//P1670 ��Сд��ĸ��ת  
//֪ʶ��  ��Сд�ַ���ת�� 

int main() {


	char c;
	int code;
	
	while(cin >> c) {
		if(c == '#') break; 
		code = int(c);
		//��д��ĸ 
		if(code >= 65 && code <=90) {
			cout << char(c + 32);
		}
		//Сд��ĸ 
		if(code >= 97 && code <=122) {
			cout << char(c - 32);
		}
		
	}



    return 0;
}

