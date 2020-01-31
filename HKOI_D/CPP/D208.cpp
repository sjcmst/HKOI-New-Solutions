#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N;
    int num[N];
    for(int i=0;i<N;i++){
        cin >> num[i];
    }
    int maxNum = max(num[0],num[1]);
    int secondMaxNum = min(num[0],num[1]);
    for(int i=2;i<N;i++){
        if(num[i]>secondMaxNum){
            if(num[i]>maxNum){
                secondMaxNum = maxNum;
                maxNum = num[i];
            }else{
                secondMaxNum = num[i];
            }
        }
    }
    cout << maxNum << endl << secondMaxNum;
}