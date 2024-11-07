#include <iostream>
using namespace std;

 
void printTrapezoid(int height, int base_top, int base_bottom) {
    for (int i = 0; i < height; ++i) {
        // 打印上半部分的空格
        for (int j = 0; j < base_bottom - i - 1; ++j) {
            std::cout << " ";
        }
        // 打印上半部分的星号
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }
        // 换行
        std::cout << std::endl;
    }
    
    // 打印下半部分
    for (int i = height - 2; i >= 0; --i) {
        // 打印下半部分的空格
        for (int j = 0; j < base_bottom - i - 1; ++j) {
            std::cout << " ";
        }
        // 打印下半部分的星号
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }
        // 换行
        std::cout << std::endl;
    }
}
 
int main() {
    int height = 5;       // 梯形的高度
    int base_top = 3;     // 上底边长
    int base_bottom = 5;  // 下底边长
    
    printTrapezoid(height, base_top, base_bottom);
    
    return 0;
}
