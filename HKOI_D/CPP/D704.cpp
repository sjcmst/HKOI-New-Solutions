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

    int values[length+2], questionNexts[length+2];
    cin >> questionNexts[0];//line 1 input
    for(int i=1;i<=length;i++){
        cin >> values[i];//line 2 input
    }
    for(int i=1;i<=length;i++){
        cin >> questionNexts[i];//line 3 input
    }
    
    int requiredLocation; //line 4 input
    cin >> values[length+1];
    cin >> requiredLocation;


    //element head;
    //head.value = values[questionNexts[0]];
    //head.questionNext = questionNexts[questionNexts[0]];
    int current = 0;
    for(int i=0;i<requiredLocation;i++){
        current = questionNexts[current];
    }
    int temp = questionNexts[current];
    questionNexts[current] = length+1;
    questionNexts[length+1] = temp;

    cout << questionNexts[0] << endl;
    cout << values[length+1] << " " <<questionNexts[length+1] << endl;
    if(requiredLocation==0){
        cout << -1;
    }else{
        cout << current << " " << values[current] << " " << questionNexts[current];
    }

}