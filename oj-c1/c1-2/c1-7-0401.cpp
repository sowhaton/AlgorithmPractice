#include <iostream>
using namespace std;

//P1694 ˭���Ե�3  ��ʦ�㲦��AC   ��������˼· ��������Ż� 

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

