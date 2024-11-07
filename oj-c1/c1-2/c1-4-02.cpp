#include <iostream>
using namespace std;

//P1683 最小公倍数  方法1:满足取余   
//方法2:  优化: 23456 的最小公倍数是60,所以这个数字必定大于60，且是 n*60 + 1 每次循环可以 + 60 减少循环次数 


int main() {
	//int x = 0;


//	while(++x){
//		if(x%2 == 1 && x%3 == 1 && x%4 == 1 && x%5 == 1 && x%6 == 1 && x%7 == 0) {
//			cout << x;
//			break;
//		}
//	
//	}


	// 2 3 4 5 6 利用最小公倍数来计算  
	int min = 60 + 1;
	while(1) {
		if(min%2 == 1 && min%3 == 1 && min%4 == 1 && min%5 == 1 && min%6 == 1 && min%7 == 0) {
			cout << min;
			break;
		}
		
		min = min + 60; 
	}



//	cout << 301%2 << endl;
//	cout << 301%3 << endl;
//	cout << 301%4 << endl;
//	cout << 301%5 << endl;
//	cout << 301%6 << endl;
//	cout << 301%7 << endl;
	

    return 0;
}

