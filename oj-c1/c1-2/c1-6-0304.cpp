#include <iostream>
using namespace std;

//P1666 C1-6-03  ƽ��ֵ����   ����4: ���߼�    
int main() {

	char ch;
	int cnt = 0;
	int sum = 0;
	int sum_n = 0; 
	int num1 = 0,num2 = 0,num3 = 0;
	int total = 0; //���������������� ������1 Ϊ1  ����12 Ϊ2  ����125 Ϊ 3  
	
	//123we456ER908#
	while(cin >> ch) {
		if(ch >= '0' && ch <='9') {
			
			total++;
		
			if(num1 == 0 && total == 1) {
				num1 = ch - '0';
			}
			if(num2 == 0 && total == 2) {
				num2 = ch - '0';
			}
			if(num3 == 0 && total == 3) {
				num3 = ch - '0';
			} 
		
		} else {
			
			if(total > 0) {
				cnt++;
				switch(total) {
					case 1:
						sum_n = num1;
					break;
					
					case 2:
						sum_n = num1 * 10 + num2;		
					break;
					
					case 3:
						sum_n = num1 * 100 + num2 * 10 + num3; 
					break;
				} 	
				sum += sum_n; 
				total = 0; 
				sum_n = 0;
				num1 = num2 = num3 = 0; 
			} 
			
	
			
		}
		
		if(ch == '#') break;
	} 

	cout << "sum = "<< sum << "  cnt  =" << cnt <<  "  avg=" << sum/cnt;
	
    return 0;
}

