#include <iostream>
using namespace std;

//P1694 谁是卧底3  老师点拨后AC   再梳理下思路 代码可以优化 

int main() {
	
	int n;
	int num;
	
	bool flag = true;
	bool has = false;
	
	cin >> n;
	
	while(n) {
		cin >> num;
		for(int j = 2; j < num; j++) {
			
			if(num%j == 0) {
				flag = false;
			}
		}
		if(flag) {
			has = true;
			break;
		}		
		n--;
	}

	if(has == false){
		 cout << "no";
	} else {
		cout << "yes";
	}
 

    return 0;
}

