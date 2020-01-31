#include <iostream>

using namespace std;

int main(){
    int eachWin, eachDraw;
    cin >> eachWin >> eachDraw;
    char name[3][50] = {"Alpha","Beta","Gamma"};
    int totalScore[3], goals[3], goalsGiven[3];
    for(int i=0;i<3;i++){
        cin >> totalScore[i] >> goals[i] >> goalsGiven[i];
    }
    int isZero = 1;
    for(int i=0;i<3;i++){
        if(goals[i]!=0||goalsGiven[i]!=0){
            isZero = 0;
        }
    }

    if(isZero){ //subtask 1 (7M)
        int totalScores = totalScore[0]+totalScore[1]+totalScore[2];
        if(eachDraw==0){
            if(totalScores==0){
                cout << "Alpha 0 - 0 Beta" << endl;
                cout << "Beta 0 - 0 Gamma" << endl;
                cout << "Alpha 0 - 0 Gamma" << endl;
                return 0;
            }else{
                cout << "Impossible";
                return 0;
            }
        }
        else if(
        totalScore[0]%eachDraw!=0||
        totalScore[1]%eachDraw!=0||
        totalScore[2]%eachDraw!=0||
        totalScore[0]/eachDraw!=2||
        totalScore[1]/eachDraw!=2||
        totalScore[2]/eachDraw!=2){
            cout << "Impossible";
            return 0;
        }else{
            cout << "Alpha 0 - 0 Beta" << endl;
            cout << "Beta 0 - 0 Gamma" << endl;
            cout << "Alpha 0 - 0 Gamma" << endl;
            // while(totalScore[0]!=0){
            //     totalScore[0]-=eachDraw;
            //     if(totalScore[1]>totalScore[2]){
            //         totalScore[1]-=eachDraw;
            //         cout << name[0] << " 0 - 0 " << name[1] << endl;
            //     }else{
            //         totalScore[2]-=eachDraw;
            //         cout << name[0] << " 0 - 0 " << name[2] << endl;
            //     }
            // }
            // while(totalScore[1]!=0){
            //     totalScore[1]-=eachDraw;
            //     totalScore[2]-=eachDraw;
            //     cout << name[1] << " 0 - 0 " << name[2] << endl;
            // }
            return 0;
        }
    }else
    if(eachWin==0){
        int totalScores = totalScore[0]+totalScore[1]+totalScore[2];
        if(totalScore[0]%eachDraw!=0||
        totalScore[1]%eachDraw!=0||
        totalScore[2]%eachDraw!=0||
        (totalScores/eachDraw)%2==1){
            cout << "Impossible";
            return 0;
        }else{

        }
    }
    
}