#include <iostream>
using namespace std;

//P1666 C1-6-03  平均值计算   方法2 : 老师介绍的方法，主要巧妙构造数字	num = num*10 + ch - '0'  

int main() {
	char ch ;
	int num  = 0;
	int sum  = 0;
	int cnt  = 0;
	bool has = false; 
	
 	//123we456ER908#
	while(cin >> ch) { 
			
		if(ch >= '0' && ch <='9') {	
			has = true;
			num = num * 10 + ch - '0';	
			
		} else {
			if(has) {
				sum += num;
				cnt++;
			}
			num = 0;
			has = false;
		}
		
		if(ch == '#') {
			
			if(has) {
				sum += num;
				cnt++; 
			}
			
			break; 
		}

		
	}
	
	cout << endl;

	cout << "sum = "<< sum << "  cnt =" << cnt <<  "  avg=" << sum/cnt;


    return 0;
}

