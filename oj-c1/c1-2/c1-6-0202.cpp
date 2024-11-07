#include <iostream>
using namespace std;

//P1682 C1-6-02  正常血压    基础题  用变量存储最大的数据   方法2

int main() {
	

	int n;
	

	int sum = 0;
	

	int max = 0;
	
	int n1,n2;
	
	cin >> n;
	
	
	for(int i = 1; i <=n;i++) {
		cin >> n1 >> n2;
		if(n1>=90 && n1<=140 && n2>=60 && n2 <= 90) {
			sum++;
			if(sum > max) {
				max = 0;
				max += sum;
			} 
			
		} else{
				sum = 0;
			}
	}
	
	cout << max;

    return 0;
}

