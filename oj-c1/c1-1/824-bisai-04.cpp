#include <iostream>
using namespace std;

int main(){
    int h , m , s,x ;
    char ch;
    cin >> h >> m >> s >> ch;
 	
    if(ch == 'A') {
        x = h *60 * 60 + m * 60 + s;
    } else {
        x = (h+12) * 60 * 60 + m*60 + s;
    }
    
    cout << x;
    return 0;
}
