#include <iostream>
using namespace std;

//P1692 ˭���Ե�2  �� ��P1651����  �����Ż� 
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
