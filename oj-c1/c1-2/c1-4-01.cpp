#include <iostream>
using namespace std;

//P1681 ��ԭ�ϵ�ˮ 

int main() {

	int Y,k,n;
	cin >> Y >> k >> n;
	bool flag = false;
	 
	//ѭ��ÿƿˮ���ܵ����� 
//	for(int i = 1;i <= n/k; i++) {
//		
//		if(i*k > Y) {
//			cout << i*k - Y << " "; 
//			flag = true;
//		} 
//	}

	//ѭ�������õ�ˮ  ʣ���ˮ + �õ���ˮ = ��ˮ����  һ����ƿ�ӵı���        
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

