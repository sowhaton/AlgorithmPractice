#include <iostream>
using namespace std;

//P1694 ˭���Ե�3   �Ż����� ����һ��flag����  

int main() {
	
	int n;
	int num;
	bool flag = true;
	cin >> n;
	
	for(int i = 1; i <= n;i++) {
		cin >> num;
		for(int j = 2; j<n;j++) {
			if(num%j == 0) {
				flag = false;
			}
		}
		if(flag) {
			break;
		} 
		
	}

	if(flag) {
		cout << "yes";
	} else {
		cout << "no";
	}



    return 0;
}

