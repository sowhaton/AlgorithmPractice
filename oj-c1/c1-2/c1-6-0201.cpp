#include <iostream>
using namespace std;

//P1682 C1-6-02  ����Ѫѹ    ������  �ñ����洢��������   ����1 

int main() {
	
	//�����������Ѫѹ�Ĵ���  ��������Сʱ�����ᳬ��n 
	int n;
	
	//����������Сʱ��  
	int sum = 0;
	
	//�����������Сʱ�� 
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

