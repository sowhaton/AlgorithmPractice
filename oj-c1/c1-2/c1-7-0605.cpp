#include <iostream>
using namespace std;

int main(){
    int n;
    int cnt=0;
    cin >> n;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i&&j<n;j++){
            if(i*j==n&&i!=1&&j!=1){
                if(i*j==n){
                    if(i>cnt){
                   		cnt=0;
                        cnt+=i;
                    }
                }
        	}
        }
    }
    cout << cnt;
    return 0;
}
