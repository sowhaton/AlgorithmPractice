#include <iostream>
using namespace std;

//P1651 ˭���Ե�  �� ��ϰѭ����cin  �����ײ  ����
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
