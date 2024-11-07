#include <iostream>
#include <cmath>

using namespace std;

void printCircle(int radius) {
    for (int i = -radius; i <= radius; i++) {
        for (int j = -radius; j <= radius; j++) {
            // 计算圆的方程
            if (round(sqrt(i * i + j * j)) == radius) {
                cout << "*"; // 在圆的边界打印星号
            } else {
                cout << " "; // 其他地方打印空格
            }
        }
        cout << endl; // 换行
    }
}

int main() {
    int radius;
    
    cout << "请输入圆的半径: ";
    cin >> radius;

    printCircle(radius);
    
    return 0;
}

