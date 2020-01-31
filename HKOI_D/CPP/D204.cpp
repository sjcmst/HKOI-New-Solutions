#include <iostream>

using namespace std;

int main(){
    int n,mid;
    cin >> n;
    mid = n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<abs(mid-i);j++){
            cout << " ";
        }
        cout << "#";
        if(i==0||i==n-1){
            cout << endl;
            continue;
        }
        for(int j=0;j<n-2-abs(mid-i)*2;j++){
            cout << " ";
        }
        cout << "#"<<endl;
    }
}