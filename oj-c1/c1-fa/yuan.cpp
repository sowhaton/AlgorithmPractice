#include <iostream>
#include <cmath>

using namespace std;

void printCircle(int radius) {
    for (int i = -radius; i <= radius; i++) {
        for (int j = -radius; j <= radius; j++) {
            // ����Բ�ķ���
            if (round(sqrt(i * i + j * j)) == radius) {
                cout << "*"; // ��Բ�ı߽��ӡ�Ǻ�
            } else {
                cout << " "; // �����ط���ӡ�ո�
            }
        }
        cout << endl; // ����
    }
}

int main() {
    int radius;
    
    cout << "������Բ�İ뾶: ";
    cin >> radius;

    printCircle(radius);
    
    return 0;
}

