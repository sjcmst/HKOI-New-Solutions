#include <iostream>

using namespace std;

int main(){
    int numberOfSnakes, length, dice;
    cin >> length >> numberOfSnakes >> dice;

    int snakeEntry[numberOfSnakes];
    int snakeExit[numberOfSnakes];
    for(int i=0; i<numberOfSnakes;i++){
        cin >> snakeEntry[i] >> snakeExit[i];
    }

    if(numberOfSnakes==0){
        cout << (length+dice-1)/dice;
    }else 
    if(dice==1&&numberOfSnakes!=0){
        cout << "Lonely Christmas";
    }else 
    if(dice==2){
        int snakes[length+1];
        for(int i=0;i<length+1;i++){
            snakes[i]=0;
        }
        for(int i=0;i<numberOfSnakes;i++){
            snakes[snakeEntry[i]] = 1;
        }
        int currentStep = 0;
        int diceCount = 0;
        //cout << "here";
        while(currentStep!=length){
            //cout << "here loop";
            if(currentStep+1==length||currentStep+2==length){
                currentStep=length;
            }else{
                if(snakes[currentStep+2]==0){
                    currentStep+=2;
                }else{
                    if(snakes[currentStep+1]==0){
                        currentStep++;
                    }else{
                        cout << "Lonely Christmas";
                        return 0;
                    }
                }
            }
            diceCount++;
            //cout << currentStep << endl;
        }
        cout << diceCount << endl;
    }


}