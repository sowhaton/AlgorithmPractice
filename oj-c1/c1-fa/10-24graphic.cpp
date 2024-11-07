#include <iostream>
using namespace std;

//P1XXX




//int kong_squre(int n); 
//int shixin_squre(int n); 
//int triangle(int n);

//菱形 
//int trapezoid(int n);
	



//打印空心正方形    
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

//打印实心正方形    
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
// 打印实心金字塔 
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













