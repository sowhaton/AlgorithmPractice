#include <iostream>
using namespace std;

//P1600 ����������   ����С�Ŀ�ʼ�ң�ֱ���ҵ����� 

int main() {
	
	int n ;
	int max = 0;
	cin >> n;
	
	for(int i = 1 ;i<n;i++) {
		
		if(n%i == 0) {
			if(i > max) max = i;
		}
	}


	cout << max;


    return 0;
}

