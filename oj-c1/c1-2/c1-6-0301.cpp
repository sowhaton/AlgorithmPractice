#include <iostream>
using namespace std;

//P1666 C1-6-03  平均值计算   方法1: 这种只适合每次出现三位数情况  存在bug 

int main() {
	char ch;
	int n = 1;
	int x = 0;
	int sum ,sum_n  = 0;
	int n1=0,n2=0,n3=0;
 	//123we456ER908#
	while(cin >> ch) { 
		if(ch == '#') break;
		
		if(ch >= '0' && ch <='9') {
			
	
			if(n == 1) {
		
				
				sum_n = (ch - '0') * 100;
				x++;
			}
			
			if(n == 2) {
			
			
				
				sum_n = (ch - '0') * 10;
			}
			
			if(n == 3) {
		
				
				sum_n = ch - '0';
		
			}
			n++;
			sum +=sum_n;
		
		} else {
			n = 1;
			sum_n = 0;
		}
		
		
	}
	
	
	cout << "sum = "<< sum << "x =" << x <<  "avg=" << sum/x;


    return 0;
}

