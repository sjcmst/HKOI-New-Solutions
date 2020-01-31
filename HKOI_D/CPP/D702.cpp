#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int numberOfOperations, endPoint = 0, stackArray[1000];
    cin >> numberOfOperations;

    for(int i=0;i<numberOfOperations;i++){
        char command[5];
        cin >> command;
        if(strcmp(command,"PUSH")==0){
            cin >> stackArray[endPoint];
            endPoint++;
        }else if(strcmp(command,"TOP")==0){
            if(endPoint-1<0){
                cout << "Empty" << endl;
            }else{
                cout << stackArray[endPoint-1] << endl;
            }
        }else if(strcmp(command, "SIZE")==0){
            cout << endPoint << endl;
        }else if(strcmp(command, "POP")==0){
            if(endPoint-1<0){
                cout << "Cannot pop" << endl;
            }else{
                endPoint--;
            }
        }
    }
    return 0;
}