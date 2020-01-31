#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char theString[256];
    cin.getline(theString,256);
    cout << strlen(theString) << endl;
    int spaces = 1;
    int pos = 0;
    while(theString[pos]!='\0'){
        if(theString[pos]==' '){
            spaces++;
        }
        pos++;
    }
    cout << spaces << endl;

}