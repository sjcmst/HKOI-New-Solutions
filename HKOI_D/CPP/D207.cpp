#include <iostream>

using namespace std;

int main(){
    int a,b,hcf;
    cin >> a >> b;
    if(b>a){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i = b; i >=1 ; i--){
        if(a%i==0&&b%i==0){
            hcf = i;
            break;
        }
    }
    cout << hcf << endl << a*b/hcf;
}