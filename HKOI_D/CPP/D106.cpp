#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    if(x%10==1 && x%100!=11){
        cout << x << "st" << endl;
    }else if(x%10==2 && x%100!=12){
        cout << x << "nd" << endl;
    }else if(x%10==3 && x%100!=13){
        cout << x << "rd" << endl;
    }else{
        cout << x << "th" << endl;
    }
    return 0;
}