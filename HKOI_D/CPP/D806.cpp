#include <iostream>

using namespace std;

void mergeSort(int a, int b){
    if(a==b){
        return;
    }
    int o1=a,o2=(b+a)/2;
    int o3=o2+1,o4=b;
    mergeSort(o1,o2);
    mergeSort(o3,o4);
    cout << o1+1 << " " << o2+1 << " " << o3+1 << " " << o4+1 << endl;
}
int main(){
    int N;
    cin >> N;
    mergeSort(0,N-1);
}