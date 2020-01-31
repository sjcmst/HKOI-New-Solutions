#include <iostream>

using namespace std;

// struct element{
//     int value;
//     int* next;
//     int questionNext;
// };
int main(){
    int length;
    cin >> length;

    int values[length], questionNexts[length];
    cin >> questionNexts[0];
    for(int i=1;i<=length;i++){
        cin >> values[i];
    }
    for(int i=1;i<=length;i++){
        cin >> questionNexts[i];
    }
    
    //element head;
    //head.value = values[questionNexts[0]];
    //head.questionNext = questionNexts[questionNexts[0]];
    int current = questionNexts[0];
    while(current!=0){
        cout << values[current] << endl;
        current = questionNexts[current];
    }
    cout << "End" << endl;
}