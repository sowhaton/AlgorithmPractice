#include <iostream>
using namespace std;

 
void printTrapezoid(int height, int base_top, int base_bottom) {
    for (int i = 0; i < height; ++i) {
        // ��ӡ�ϰ벿�ֵĿո�
        for (int j = 0; j < base_bottom - i - 1; ++j) {
            std::cout << " ";
        }
        // ��ӡ�ϰ벿�ֵ��Ǻ�
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }
        // ����
        std::cout << std::endl;
    }
    
    // ��ӡ�°벿��
    for (int i = height - 2; i >= 0; --i) {
        // ��ӡ�°벿�ֵĿո�
        for (int j = 0; j < base_bottom - i - 1; ++j) {
            std::cout << " ";
        }
        // ��ӡ�°벿�ֵ��Ǻ�
        for (int j = 0; j < 2 * i + 1; ++j) {
            std::cout << "*";
        }
        // ����
        std::cout << std::endl;
    }
}
 
int main() {
    int height = 5;       // ���εĸ߶�
    int base_top = 3;     // �ϵױ߳�
    int base_bottom = 5;  // �µױ߳�
    
    printTrapezoid(height, base_top, base_bottom);
    
    return 0;
}
