#include <iostream>
using namespace std;

//P1667 �ַ�����
// �жϴ�Сд��ĸ�����֣� �ο�OJд�����ã� 

int main() {

	char s;
	int n1,n2,n3,n4,code;
	
	while(cin >>s) {
		if(s == '#') break;
		code = int(s);
		if(code >=48 && code <=57) {
			n3++;
			continue;
		}
		else if(code >= 65 && code <=90) {
			//��д��ĸ 
			n1++;
			continue;
		}
		else if(code >= 97 && code <=122) {
		//Сд��ĸ 
			n2++;
			continue;
		} else {
			n4++;
			continue;
		}
	}

	cout << n1 << endl;
	cout << n2 << endl;
	cout << n3 << endl;
	cout << n4 << endl;




    return 0;
}

