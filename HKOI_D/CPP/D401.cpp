#include <iostream>
#include <cmath>
using namespace std;

int checkPrime(int num){
    if(num==2) return 1;
    for(int i=2;i<=ceil(sqrt(num));i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int N;
    cin >> N;
    int isPrime[N];

    for(int i=2;i<=N;i++){
        isPrime[i] = 1;
    }

    for(int i=2;i<=N;i++){
        if(isPrime[i]==1){
            if(checkPrime(i)==0){
                for(int j=i;j<N;j+=i){
                    isPrime[j] = 0;
                }
            }else{
                cout << i << endl;
            }
        }
    }

    return 0;

}