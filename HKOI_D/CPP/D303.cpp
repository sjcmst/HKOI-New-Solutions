#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char original[100], newStr[100];
    cin >> original;
    //cout << strlen(original) << endl;
    for(int i = strlen(original)-1;i>=0;i--){
        newStr[strlen(original)-1-i] = original[i];
    }
    newStr[strlen(original)] = '\0';

    cout << newStr << endl << ((strcmp(original,newStr)==0)?"Yes":"No");
}