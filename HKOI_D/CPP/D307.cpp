#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char rows[3][4];
    char game[10];

    for(int i=0;i<3;i++){
        cin >> rows[i];
    }

    //input LOG
    // for(int i=0;i<9;i++){
    //     cout << i << " stores " << rows[i/3][i%3] << endl;
    // }
    
    //ROWS CHECK
    for(int i=0;i<3;i++){
        char winning = rows[i][0];
        if((winning != '.') && (winning == rows[i][1] && winning == rows[i][2])){
            cout << winning << " wins";
            return 0;
        }
    }

    //COLUMN CHECK
    for(int i=0;i<3;i++){
        char winning = rows[0][i];
        if((winning != '.') && (winning == rows[1][i] && winning == rows[2][i])){
            cout << winning << " wins";
            return 0;
        }
    }

    //DIAGONAL CHECK (NW, SE)
    char winning = rows[0][0];
    if((winning != '.') && (winning == rows[1][1] && winning == rows[2][2])){
        cout << winning << " wins";
        return 0;
    }

    //DIAGONAL CHECK (NE, SW)
    winning = rows[0][2];
    if((winning != '.') && (winning == rows[1][1] && winning == rows[2][0])){
        cout << winning << " wins";
        return 0;
    }

    //ended?
    for(int i=0;i<9;i++){
        if(rows[i/3][i%3] == '.'){ //if there is empty space means it is not ended.
            cout << "Not ended";
            return 0;
        }
    }

    cout << "Draw";
    return 0;

}