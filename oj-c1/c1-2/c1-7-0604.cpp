#include <iostream>
using namespace std;

//P1600 找最大的因数(题目排除本身)  第二小 和第二大的因素成对， 所以只要找到第二小的因数 就等于找到第二大的因素 
//找规律
//   9      1  3   9
//  10      1  2   5  10
//  12      1  2   3  4  6  12
//  15      1  3   5 
//  16      1  2   4  8  16
//  20      1  2  4   5  10   20
   
int main() {

	int n;
	cin >> n;
	
	for(int i=2;i<n;i++) {
		if(n%i==0) {
			cout << n/i;
			break;
		}
	} 

    return 0;
}

