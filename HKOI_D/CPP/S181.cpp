#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int toLeftTime, toRightTime, numberOfGuests;
    cin >> numberOfGuests >> toLeftTime >> toRightTime;
    int nuggets[numberOfGuests];
    for(int i=0;i<numberOfGuests;i++){
        cin >> nuggets[i];
    }
    int numberOfOdd=0;
    int oddLocations[numberOfGuests];
    for(int i=0;i<numberOfGuests;i++){
        if(nuggets[i]%2==1){ //if odd
            oddLocations[numberOfOdd] = i;
            numberOfOdd++;
        }
    }

    if(numberOfOdd%2==1){ //if there are 1,3,5 total odd nuggets, it is impossible
        cout << -1;
        return 0;
    }

    if(numberOfGuests==numberOfOdd){  //Subtask 3 (13M)
        int minimumTime = min(toLeftTime,toRightTime);
        cout << minimumTime*(numberOfGuests/2);
    }else
    if(numberOfOdd==2){ //Subtask 2 (16M)
        int oddLocation1, oddLocation2;
        oddLocation1 = oddLocations[0];
        oddLocation2 = oddLocations[1];
        // int differenceLeft, differenceRight;
        // differenceLeft = toLeftTime*(oddLocation2-oddLocation1);
        // differenceRight = toRightTime*(oddLocation1-oddLocation2+numberOfGuests);
        int minDifference = min(oddLocation2-oddLocation1,oddLocation1-oddLocation2+numberOfGuests);
        //cout << differenceLeft << " " << differenceRight << endl;
        cout << minDifference*min(toLeftTime,toRightTime);
    }
}