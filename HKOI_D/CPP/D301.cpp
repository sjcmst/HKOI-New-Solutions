#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char names[5][1000];
    for(int i = 0; i < 5 ;i++){
        cin.getline(names[i],1000);
    }
    for(int i = 0; i < 5; i++){
        cout << names[i] << endl;
    }
}