#include <iostream>

using namespace std;

void merge(int theArray[], int N, int aStart, int aEnd, int bStart, int bEnd){ //a and b are consecutive memory
    int aLen = aEnd-aStart+1;
    int bLen = bEnd-bStart+1;
    int aCurrent = aStart, bCurrent = bStart;
    int totalLen = aLen+bLen;
    int newArray[totalLen];
    //cout << "ok here" << aStart << endl;
    while(!(aCurrent==aEnd+1 && bCurrent==bEnd+1)){
        if(!(aCurrent==aEnd+1) && (bCurrent==bEnd+1 || theArray[aCurrent]<theArray[bCurrent])){ //a increment
            newArray[aCurrent+bCurrent-aStart-bStart] = theArray[aCurrent];
            aCurrent++;
        }else{ //b increment
            newArray[aCurrent+bCurrent-aStart-bStart] = theArray[bCurrent];
            bCurrent++;
        }
        //cout << "in loop" << aCurrent << bCurrent << endl;

    }
    for(int i=0;i<totalLen-1;i++){
        cout << newArray[i] << " ";
    }
    cout << newArray[totalLen-1] << endl;

    for(int i=0;i<totalLen;i++){
        theArray[aStart+i] = newArray[i];
        //cout << aStart+i;
    }
    // for(int i=0;i<N;i++){
    //     cout << theArray[i] << " ";
    // }
    // cout << endl;
    return;

}
int main(){
    int N,O;
    cin >> N >> O;
    int theArray[N];
    for(int i=0;i<N;i++){
        cin >> theArray[i];
    }
    for(int i=0;i<O;i++){
        int p,q,r,s;
        cin >> p >> q >> r >> s;
        merge(theArray,N,p-1,q-1,r-1,s-1);
    }
}