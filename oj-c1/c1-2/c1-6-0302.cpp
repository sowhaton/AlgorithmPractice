#include <iostream>
using namespace std;

//P1666 C1-6-03  ƽ��ֵ����   ����1  ���߼���  �����Ż�����  �������4 

int main() {
	char ch ;
	int n = 0;
	int x = 0;
	int sum = 0;
	int sum_n= 0;
	int n1=0;
	int n2=0;
	int n3=0;
	
 	//123we456ER908#
	while(cin >> ch) { 
	
		if(ch >= '0' && ch <='9') {	
			sum_n = ch - '0';
			
			//������һ������	
			if(n1 == 0) {
				x++;
				n1 = sum_n;
		
			} else {
				//�ڶ������ֿ�����0������������������ʱ Ҫ�ж��ǵڶ������������֣���ֹ���������ָ�ֵ��n2 
				if(n2 == 0 && n == 1) {
					n2 = sum_n;
				} else {
					//���������� 
					if(n3 == 0) {
						n3 = sum_n;
					}
				}
			}
			n++;
			
		} else {
			//��һ�ִ������� 
			if(n > 0) {
				//һλ�� 
				if(n == 1) {
					sum_n = n1;
				}
				//��λ�� 
				if(n == 2) {
					sum_n = n1 *10 + n2;
				}
				//��λ�� 
				if(n == 3) {
					sum_n = n1*100 + n2*10 + n3;
				
				}
				//�ۼ����ݺ�			
				sum += sum_n;
				
				//���³�ʼ�� ���ֵ����� 
				sum_n=0;
				
//	            n1 = 0;
//	            n2 = 0;
//	            n3 = 0;
//				n  = 0;
				//�������ʼ��,�¸��ֻ����¿�ʼ 
 				sum_n = n = n1 = n2 = n3 =0;
			} 	

		}
		
		if(ch == '#') break;
		
	}
	
	cout << endl;
	cout << " x =  " << x << endl;
	cout << "sum = "<< sum << "  x =" << x <<  "  avg=" << sum/x;


    return 0;
}

