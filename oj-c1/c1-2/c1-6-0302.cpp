#include <iostream>
using namespace std;

//P1666 C1-6-03  平均值计算   方法1  纯逻辑，  可以优化代码  详见方法4 

int main() {
	char ch ;
	int n = 0;
	int x = 0;
	int sum = 0;
	int sum_n= 0;
	int n1=0;
	int n2=0;
	int n3=0;
	
 	//123we456ER908#
	while(cin >> ch) { 
	
		if(ch >= '0' && ch <='9') {	
			sum_n = ch - '0';
			
			//遇到第一个数字	
			if(n1 == 0) {
				x++;
				n1 = sum_n;
		
			} else {
				//第二个数字可能是0，当遇到第三个数字时 要判断是第二个数字来区分，防止第三个数字赋值给n2 
				if(n2 == 0 && n == 1) {
					n2 = sum_n;
				} else {
					//第三个数字 
					if(n3 == 0) {
						n3 = sum_n;
					}
				}
			}
			n++;
			
		} else {
			//上一轮存在数字 
			if(n > 0) {
				//一位数 
				if(n == 1) {
					sum_n = n1;
				}
				//两位数 
				if(n == 2) {
					sum_n = n1 *10 + n2;
				}
				//百位数 
				if(n == 3) {
					sum_n = n1*100 + n2*10 + n3;
				
				}
				//累加数据和			
				sum += sum_n;
				
				//重新初始化 下轮的数据 
				sum_n=0;
				
//	            n1 = 0;
//	            n2 = 0;
//	            n3 = 0;
//				n  = 0;
				//计算完初始化,下个轮回重新开始 
 				sum_n = n = n1 = n2 = n3 =0;
			} 	

		}
		
		if(ch == '#') break;
		
	}
	
	cout << endl;
	cout << " x =  " << x << endl;
	cout << "sum = "<< sum << "  x =" << x <<  "  avg=" << sum/x;


    return 0;
}

