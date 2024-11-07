#include <iostream>
using namespace std;

//P1676 验证密码    easy--     while循环 cin输入的类型需要复习

int main() {

	int num;
 
	for(int i = 2; i>=0;i--) {
			cin >> num;
		if(num != 666) {
			cout << "还有" << i <<"次机会" << endl;
			continue;
		}		
		cout << "登录成功";
		break;
	}




    return 0;
}

