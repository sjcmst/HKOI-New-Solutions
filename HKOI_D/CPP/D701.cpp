#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int numberOfOperations;
    int queueInts[1000],startPoint=0,endPoint = 0;
    cin >> numberOfOperations;

    for(int i=0;i<numberOfOperations;i++){
        char operation[6];
        cin >> operation;
        if(strcmp(operation,"PUSH")==0){ //push an element into the array
            cin >> queueInts[endPoint];
            endPoint = (endPoint == 999 ? 0 : endPoint+1);
        }else if(strcmp(operation,"FRONT")==0){ //output the front element in the array
            if(endPoint == startPoint){
                cout << "Empty" << endl;
            }else{
                cout << queueInts[startPoint] << endl;
            }
        }else if(strcmp(operation,"SIZE")==0){
            cout << (endPoint-startPoint>=0 ? endPoint-startPoint : endPoint-startPoint+1000) << endl;
        }else if(strcmp(operation,"POP")==0){
            if(endPoint==startPoint){
                cout << "Cannot pop" << endl;
            }else{
                startPoint = (startPoint == 999 ? 0 : startPoint+1);
            }
        }
    }
    return 0;
}
