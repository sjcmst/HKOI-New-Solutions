#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int numberOfIcons, totalRow, totalCol;
    cin >> numberOfIcons >> totalRow >> totalCol;

    int rowOfIcons[numberOfIcons];
    int colOfIcons[numberOfIcons];
    char colorOfIcons[numberOfIcons];
    int importanceOfIcons[numberOfIcons];
    for(int i=0;i<numberOfIcons;i++){
        cin >> rowOfIcons[i] >> colOfIcons[i] >> colorOfIcons[i] >> importanceOfIcons[i];
    }

    int numberOfWallpapers;
    cin >> numberOfWallpapers;

    char colorsOfWallPapers[numberOfWallpapers][totalRow][totalCol];
    char initialColor = '\0';
    char isUnique = '\0';
    for(int i=0;i<numberOfWallpapers;i++){
        for(int j=0;j<totalRow;j++){
            for(int k=0;k<totalCol;k++){
                cin >> colorsOfWallPapers[i][j][k];
                if(initialColor=='\0'){
                    isUnique = colorsOfWallPapers[i][j][k];
                    initialColor = isUnique;
                }else{
                    if(initialColor!=colorsOfWallPapers[i][j][k]){
                        isUnique = '\0';
                    }
                }
            }
            //cin.getline(colorsOfWallPapers[i][j],1000);
            cin.ignore();
            //fflush(stdin);
        }
    }

    if(numberOfWallpapers==1&&isUnique!='\0'){
        // for(int i=0;i<totalRow;i++){
        //     for(int j=0;j<totalRow;j++){
        //         cout << colorsOfWallPapers[0][i][j];
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        // for(int i=0;i<numberOfIcons;i++){
        //     cout << rowOfIcons[i] << " " << colOfIcons[i] << " " << colorOfIcons[i] << " " << importanceOfIcons[i];
        //     cout << endl;
        // }
        // cout << endl;
        int totalImportance = 0;
        for(int i=0;i<numberOfIcons;i++){
            //cout << colorsOfWallPapers[0][rowOfIcons[i]-1][colOfIcons[i]-1] << endl;
            if(colorOfIcons[i]!=colorsOfWallPapers[0][rowOfIcons[i]-1][colOfIcons[i]-1]){
                
                totalImportance+=importanceOfIcons[i];
            }
        }

        cout << totalImportance << " 1 0";
    }else
    if(numberOfWallpapers==1){     
        int totalImportance = 0;
        int numberOfSwaps = 0;
        int swapOldRow[1600];
        int swapOldCol[1600];
        int swapNewRow[1600];
        int swapNewCol[1600];

        for(int i=0;i<numberOfIcons;i++){
            //cout << colorsOfWallPapers[0][rowOfIcons[i]-1][colOfIcons[i]-1] << endl;
            if(colorOfIcons[i]!=colorsOfWallPapers[0][rowOfIcons[i]-1][colOfIcons[i]-1]){
                totalImportance+=importanceOfIcons[i];
            }
        }

        cout << totalImportance << " 1 0";
    }
}