#include <iostream>
using namespace std;

//P1667 字符分类
// 判断大小写字母，数字， 参考OJ写法更好？ 

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
			//大写字母 
			n1++;
			continue;
		}
		else if(code >= 97 && code <=122) {
		//小写字母 
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

