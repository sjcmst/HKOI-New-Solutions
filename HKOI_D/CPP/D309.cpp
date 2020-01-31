#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str1[200], str2[200];
    int minLen, canEqual;
    cin >> str1;
    cin >> str2;

    //Uppercase to lowercase str1
    for(int i=0;i<strlen(str1);i++){
        if(str1[i]>=65&&str1[i]<=90){
            str1[i]+=32;
        }
    }
    //Uppercase to lowercase str2
    for(int i=0;i<strlen(str2);i++){
        if(str2[i]>=65&&str2[i]<=90){
            str2[i]+=32;
        }
    }
    if(strlen(str1)>strlen(str2)){
        minLen = strlen(str2);
        canEqual = -1;
    }else if(strlen(str1)<strlen(str2)){
        minLen = strlen(str1);
        canEqual = -2;
    }else{
        minLen = strlen(str1);
        canEqual = 1;
    }

    for(int i=0;i<minLen;i++){
        if(str1[i]>str2[i]){
            cout << "Greater";
            return 0;
        }else if(str1[i]<str2[i]){
            cout << "Smaller";
            return 0;
        }
    }
    if(canEqual==1){
        cout << "Equal";
    }else if(canEqual==-1){
        cout << "Greater";
    }else{
        cout << "Smaller";
    }
}