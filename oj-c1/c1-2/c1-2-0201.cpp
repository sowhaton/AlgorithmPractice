#include <iostream>
using namespace std;

//P1663 游泳 *****     循环中变量动态变换  需要复习 

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

