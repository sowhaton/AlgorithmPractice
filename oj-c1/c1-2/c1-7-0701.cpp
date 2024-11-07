#include <iostream>
using namespace std;

//P1599 ÅÐ¶ÏºÏÊý

int main() {

	int n;
	bool flag = false;
	cin >> n;
	
	for(int i=2; i<n;i++) {
		
		if(n%i == 0) {
			flag = true;
		}
	}
	
	if(flag) cout << "yes";
	else cout << "no";

    return 0;
}

