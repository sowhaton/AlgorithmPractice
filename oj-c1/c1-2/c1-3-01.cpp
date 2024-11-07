#include <iostream>
using namespace std;

//P1668 Õ¨µ¯×¨¼Ò

int main() {
	
	
	char p3;

	bool flag = false;
	while(cin >> p3) {
		if(p3 == '@') {
			flag = true;
			break;
		}
		if(p3 == '#') break; 
	}
	
	if(flag) {
		cout << "Boom";
	} else {
		cout << "Safe";
	}
	

    return 0;
}

