#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num,i;

    cin >> num;

    for(i = 1; i*i<= num;i++){
        if(num%i==0){
            cout << i << endl;
        }
    }
    for(int j = i-1 ; j>=1;j--){
        if(num%j==0&&num/j!=j){
            cout << num/j << endl;
        }
    }
}