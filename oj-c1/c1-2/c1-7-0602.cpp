#include <iostream>
using namespace std;

//P1600 ����������   �����Ŀ�ʼ�ң��ҵ����� 

int main() {
	
	int n;
	cin >> n;
	
	for(int i =n-1;n>1;i--) {
		if(n%i ==0) {
			cout << i;
			break;
		}
	} 

    return 0;
}

