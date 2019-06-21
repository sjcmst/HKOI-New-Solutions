#include <iostream>

using namespace std;

int change(int total,int banknote){
    while(total>=banknote){
        total-=banknote;
        cout << banknote << endl;
    }
    return total; //the new balance is here
}

int main(){
    int total;
    cin >> total;
    total = change(total,1000);
    total = change(total,500);
    total = change(total,100);
    total = change(total,50);
    total = change(total,20);
    total = change(total,10);

    return 0;
}