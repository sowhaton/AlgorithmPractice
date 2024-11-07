#include <iostream>
using namespace std;

//P3133 C1-6-01  百钱买百鸡   循环枚举  方法1 

int main (){
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            for(int k=0;k<=100;k++){
                if(i*5+j*3+k/3==100&&i+j+k==100&&k%3==0){
                	cout << i << " "<< j << " "<< k <<endl;
                }
            }
        }
    }
    return 0;
}
