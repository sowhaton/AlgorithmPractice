#include <iostream>
using namespace std;



// �����ȡ��N��쳲��������еĵݹ麯��   // 1  1  2  3  5  8  13   
int fib(int n) {
	if(n <= 0) {
		return 0;
	}
	if(n == 1) {
		return 1;
	}
	return fib(n-1) + fib(n-2);
} 

//��������� 
int main() {

	int n,m;
	int *p;
	n = 10;
	p = &n;
	cout << *p;

    return 0;


}


