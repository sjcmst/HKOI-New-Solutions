#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int number, divisor;
    cin >> number;
    cout << number << "=";
    divisor = number;
    for(int i=2;i<=ceil(sqrt(number))&&i<divisor;i++){
        if(divisor%i==0){
            cout << i << "*";
            divisor /= i;
            i--;
        }
    }

    cout << divisor;
}