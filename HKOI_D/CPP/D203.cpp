#include <iostream>

using namespace std;

int main(){
    int clappingNumber;
    cin >> clappingNumber;

    for(int i = 0; i<=10;i++){
        for(int j = 0; j<10;j++){
            int number = i*10+j;
            //skip if number = 0 or number = 100
            if(number == 0){
                continue;
            }else if(number == 101){
                break;
            }
            
            int shouldClap = 0;
            if(i==clappingNumber||j==clappingNumber){
                shouldClap=1;
            }
            
            if(number%clappingNumber==0){
                shouldClap=1;
            }
            
            if(shouldClap==1){
                cout << "Clap";
            }else{
                cout << number;
            }

            if(number==100){
                cout << "";
            }else if(j==0){
                cout << endl;
            }else{
                cout << " ";
            }
            
        }
        
    }
}