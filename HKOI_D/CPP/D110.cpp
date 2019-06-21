#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char initX;
    int initY;
    char finalX;
    int finalY;

    cin >> initX >> initY;
    cin >> finalX >> finalY;
    
    //cout << initPos << endl;
    //cout << initPos[0] << initPos[1] << " " << finalPos[0] << finalPos[1] << endl;

    //cout << initX << initY;
    int horizontal = (int)initX - (int)finalX;
    int vertical = initY - finalY;
    
    //cout << horizontal << " " << vertical << endl;
    
    cout << max(abs(horizontal),abs(vertical));
    return 0;
}