#include <iostream>
using namespace std;

//P1663 ��Ӿ *****     ѭ���б�����̬�任  ��Ҫ��ϰ 

int main() {
	
	double s;
	double total = 0;
	double distance = 2;
	double step = 0;
	cin >> s;
	while(total < s) {
		total += distance;
		distance  = distance * 0.98; 
		step++;
	}
		
	cout << step;
    return 0;
}

