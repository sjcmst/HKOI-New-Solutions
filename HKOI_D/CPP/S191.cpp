#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int row, col, originalNumberOfObsticles;
    cin >> row >> col >> originalNumberOfObsticles;

    int originalObsticlesX[originalNumberOfObsticles];
    int originalObsticlesY[originalNumberOfObsticles];
    for(int i=0;i<originalNumberOfObsticles;i++){
        cin >> originalObsticlesX[i];
        cin >> originalObsticlesY[i];
    }

    int minimum = min(row,col);
    //cout << minimum << endl;
    // if(minimum==row){
    //     if(minimum == 1){
    //         cout << 1 << " " << 2 << endl;
    //     }else{
    //         for(int i=1;i<=minimum;i++){
    //             cout << minimum-i+1 << " " << i << endl;
    //         }
    //     }
    // }else{
    //     if(minimum == 1){
    //         cout << 2 << " " << 1 << endl;
    //     }else{
    //         for(int i=1;i<=minimum;i++){
    //             cout << i << " " << minimum-i+1 << endl;
    //         }
    //     }
    // }
    if(row==2&&col==2){
        int found1 = 0, found2 = 0;
        int newObsNeeded = 0;
        for(int i=0;i<originalNumberOfObsticles;i++){
            if(originalObsticlesX[i]==1&&originalObsticlesY[i]==2){
                found1 = 1;
                break;
            }
        }
        for(int i=0;i<originalNumberOfObsticles;i++){
            if(originalObsticlesX[i]==2&&originalObsticlesY[i]==1){
                found2 = 1;
                break;
            }
        }
        if(found1==0){
            newObsNeeded++;
        }
        if(found2==0){
            newObsNeeded++;
        }
        cout << newObsNeeded << endl;
        if(found1==0){
            cout << 1 << " " << 2 << endl;
        }
        if(found2==0){
            cout << 2 << " " << 1 << endl;
        }
        
    }else if(originalNumberOfObsticles==0){
        if(minimum==1){
            cout << 1 << endl;
            if(minimum==row){
                cout << 1 << " " << 2 << endl;
            }else{
                cout << 2 << " " << 1 << endl;
            }
        }else{
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << 2 << " " << 1 << endl;
        }
    }

    
}