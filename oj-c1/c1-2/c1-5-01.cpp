#include <iostream>
using namespace std;

//P1588 ¾Å¾Å³Ë·¨±í     5·Ö 

int main() {

	
	for(int i=1;i<=9;i++) {
		for(int j=1;j<=i;j++){
			
			cout << j << "*" << i <<"=" <<i*j << "\t"; 
		}
		cout << endl;
	}



    return 0;
}

