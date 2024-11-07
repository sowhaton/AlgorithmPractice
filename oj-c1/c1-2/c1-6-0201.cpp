#include <iostream>
using namespace std;

//P1682 C1-6-02  正常血压    基础题  用变量存储最大的数据   方法1 

int main() {
	
	//代表输入测量血压的次数  连续正常小时数不会超过n 
	int n;
	
	//连续正常的小时数  
	int sum = 0;
	
	//连续正常的最长小时数 
	int max = 0;
	
	int n1,n2;
	
	cin >> n;
	
	
	for(int i = 1; i <=n;i++) {
		cin >> n1 >> n2;
		if(n1>=90 && n1<=140 && n2>=60 && n2 <= 90) {
			sum++;
			if(sum > max) {
				max = sum;
			} 
			
		} else{
				sum = 0;
			}
	}
	
	cout << max;

    return 0;
}

