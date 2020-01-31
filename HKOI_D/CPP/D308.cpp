#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char bigString[100], smallString[100];
    int bigLength, smallLength, countNonOverlapping = 0, countOverlapping = 0, allowNonOverlapping = 1;

    cin >> bigString;
    cin >> smallString;

    bigLength = strlen(bigString);
    smallLength = strlen(smallString);
    
    for(int i=0;i<bigLength-smallLength+1;i++){
        char subString[100];
        for(int j=0;j<smallLength;j++){
            subString[j] = bigString[i+j];
        }
        subString[smallLength] = '\0';
        //cout << "LOG: smallString: " << smallString << "   substring: " << subString<< "allowNonOverlapping " << allowNonOverlapping <<endl;
        if(strcmp(smallString,subString)==0){
            countOverlapping++;
            if(allowNonOverlapping>=0){
                countNonOverlapping++;
                allowNonOverlapping = -smallLength;
            }
            

        }
        allowNonOverlapping++;
    }

    cout << countOverlapping << endl << countNonOverlapping;


}