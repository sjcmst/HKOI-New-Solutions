#include <iostream>
#include <cstring>

using namespace std;

int letterToInt(char x){
    return x-65+10;
}
int intToInt(char x){
    return x-48;
}
int main(){
    char id[10];
    cin >> id;
    int checkSum;
    if(strlen(id)==8){ //AB123456
        checkSum = 9*letterToInt(id[0])+
            8*letterToInt(id[1])+
            7*intToInt(id[2])+
            6*intToInt(id[3])+
            5*intToInt(id[4])+
            4*intToInt(id[5])+
            3*intToInt(id[6])+
            2*intToInt(id[7]);

    }else{ //A123456
        checkSum = 9*36+
            8*letterToInt(id[0])+
            7*intToInt(id[1])+
            6*intToInt(id[2])+
            5*intToInt(id[3])+
            4*intToInt(id[4])+
            3*intToInt(id[5])+
            2*intToInt(id[6]);
    }
    checkSum = 11-checkSum%11;
    if(checkSum==11) checkSum = 0;
    cout << id << "(" << (checkSum==10? 'A' : (char)(checkSum+48)) << ")" ;
}