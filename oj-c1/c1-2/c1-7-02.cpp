#include <iostream>
using namespace std;

//P1692 谁是卧底2  √ 和P1651类似  可以优化 
int main(){
    int n;
    int d;
    bool flag = false;
    cin >> n;
    while(n){
    	cin >> d;
    	
    	if(d < 10) {
    		flag = true;
    		break;
		}
      n--;
    }
    
    if(flag) cout << "yes";
    else cout << "no";
    return 0;
}
