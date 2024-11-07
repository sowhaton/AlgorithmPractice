#include <iostream>;
using namespace std;

int main() {
	int n,m;
	cin >> n;
	int min = 9999;
	int min_2 = 9999;  
	//  90 80 85  60 50
	// 90 80 85 86 75 82
	for(int i=1;i<=n;i++) {
		cin >> m;
		if(m < min){
			min_2 = min;
			min = m;
		} else {
			if(m < min_2){
				min_2 = m;	
			}
		
		}
	}
	
	cout << min_2;
	return 0;
}
