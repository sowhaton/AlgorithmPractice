#include <iostream>
using namespace std;

//P1600 ����������(��Ŀ�ų�����)  �ڶ�С �͵ڶ�������سɶԣ� ����ֻҪ�ҵ��ڶ�С������ �͵����ҵ��ڶ�������� 
//�ҹ���
//   9      1  3   9
//  10      1  2   5  10
//  12      1  2   3  4  6  12
//  15      1  3   5 
//  16      1  2   4  8  16
//  20      1  2  4   5  10   20
   
int main() {

	int n;
	cin >> n;
	
	for(int i=2;i<n;i++) {
		if(n%i==0) {
			cout << n/i;
			break;
		}
	} 

    return 0;
}

