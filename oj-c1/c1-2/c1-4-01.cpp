#include <iostream>
using namespace std;

//P1681 草原上的水 

int main() {

	int Y,k,n;
	cin >> Y >> k >> n;
	bool flag = false;
	 
	//循环每瓶水可能的重量 
//	for(int i = 1;i <= n/k; i++) {
//		
//		if(i*k > Y) {
//			cout << i*k - Y << " "; 
//			flag = true;
//		} 
//	}

	//循环可能用的水  剩余的水 + 用掉的水 = 总水量，  一定是瓶子的倍数        
	for(int i = 1; i < n-Y;i++) {
//		if((Y + i)%k == 0) {
//			cout << i << " ";
//			flag = true;
//		}
	
	}

	if(flag == false) {
		cout << -1;
	}


    return 0;
}

