#include <iostream>
using namespace std;

int main() {
		
	int day,day2=0,sum=0;
	cin >> day;
	

	for(int i=1;true;i++) {
		
		for(int j=1;j<=i;j++) {
			sum +=i;
			day2++;
			if(day2 == day) {
				break;
			}
		}
		if(day2 == day) {
			break;
		}
		
	}

	cout << sum;
    return 0;
}

