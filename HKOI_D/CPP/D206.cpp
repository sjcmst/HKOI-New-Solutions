#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    cout << N << endl;
    while(N!=1){
        if(N%2==1){
            N = 3*N+1;
        }else{
            N /= 2;
        }
        cout << N << endl;
    }
}