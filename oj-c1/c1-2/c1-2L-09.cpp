#include <iostream>
using namespace std;

//P1676 ��֤����    easy--     whileѭ�� cin�����������Ҫ��ϰ

int main() {

	int num;
 
	for(int i = 2; i>=0;i--) {
			cin >> num;
		if(num != 666) {
			cout << "����" << i <<"�λ���" << endl;
			continue;
		}		
		cout << "��¼�ɹ�";
		break;
	}




    return 0;
}

