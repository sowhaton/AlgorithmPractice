#include <iostream>
using namespace std;

//P1XXX




//int kong_squre(int n); 
//int shixin_squre(int n); 
//int triangle(int n);

//���� 
//int trapezoid(int n);
	



//��ӡ����������    
void kong_squre(int n )
{
	for(int i = 1; i<=n;i++) {
		
		for(int j = 1; j<=n;j++) {
			if(i == 1 || i == n || j== 1 || j == n) {
				cout << "*";
			} else {
				cout << " ";
			}
			
		}
		cout << "\n";
	} 

}

//��ӡʵ��������    
void shixin_squre(int n )
{
	for(int i = 1; i<=n;i++) {
		
		for(int j = 1; j<=n;j++) {
				cout << "*";
		}
		cout << "\n";
	} 
	

}





//    *
//   ***
//  *****
// *******
//*********
// ��ӡʵ�Ľ����� 
void triangle(int n ) 
{
	
}





int main() 
{

	int n,m;
	cin >> n;
	
	shixin_squre(n);
	
	
    return 0;
}













