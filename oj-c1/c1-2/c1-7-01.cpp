#include <iostream>
using namespace std;

//P1651 谁是卧底  √ 练习循环中cin  误打误撞  重做
int main(){
    int n;
    int d;
    cin >> n;
    while(n){
    	cin >> d;
    	
    	if(d < 10) {
    		cout << d;
    		break;
		}
    
      n--;
    }
    return 0;
}
