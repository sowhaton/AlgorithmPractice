#include <iostream>
using namespace std;

int main() {

	//�����������������
	int pwd; 
	
	//���Ի��� һ����3�Σ�
	//��2��ʼѭ�� ���Ǵ�3��ʼ
	//ʵ�������� ����2��  ����1��  ����0�� ...   
	int i = 2; 
	
	for(i = 2;i >= 0;i--) {
		//ÿ��ѭ������һ������ 
		cin >> pwd; 
		//�ж������ǲ���666   
		if(pwd != 666) {
			cout << "����"<<i <<"�λ���"<<endl; 
			continue;
		} else {
			cout << "��¼�ɹ�";
			break; 
		}
	}



    return 0;
}

