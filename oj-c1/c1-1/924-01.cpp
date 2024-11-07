#include <iostream>
using namespace std;

int main() {

	//定义输入的密码类型
	int pwd; 
	
	//尝试机会 一共有3次，
	//从2开始循环 不是从3开始
	//实际运行是 还有2次  还有1次  还有0次 ...   
	int i = 2; 
	
	for(i = 2;i >= 0;i--) {
		//每次循环输入一次密码 
		cin >> pwd; 
		//判断密码是不是666   
		if(pwd != 666) {
			cout << "还有"<<i <<"次机会"<<endl; 
			continue;
		} else {
			cout << "登录成功";
			break; 
		}
	}



    return 0;
}

