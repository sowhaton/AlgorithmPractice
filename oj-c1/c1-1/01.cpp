#include <iostream>
using namespace std;


//不用取余的做法， 请参考第二种分步写法 完成取余算法代码 
int main(){
 	
 	//定义输入的变量为整型   为输入的克重数 
	int n;
	
    //定义输入变量类型为字符类型   值为:  y  or   n 
	char c;
	
	//输入上面定义好的两个变量 
    cin >> n >> c;
    
    	
	//不满1000 也要10元 所以初始的基础费用 是10元 
    int fee = 10; 
    
    
    //第一种写法:一步到位 
    //fee += ((int)(n - 1000)/500 + 1 ) * 3;
    
    //第二种写法:分步骤 便于理解 
    
    // 超过1000部分 
    int overloaded = n - 1000; 
    
    //超过部分 每500克需要加费用，如果不满500也要加3元  
	//比如1200 超过200 虽然没满500 也要3元 对不对？  200/500 是个doube 转成int 是0  num要不要 +1 ？ 
    int num = (int)(overloaded/500); 
    	num += 1;
	
	//3元乘以了超过500克的倍数 
	fee += num * 3; 

	//这个不用解释了吧？ 
	if (c == 'y') {
		fee += 5;
	}
	
	cout << fee;

    return 0;
}
