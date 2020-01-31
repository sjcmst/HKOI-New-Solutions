#include <iostream>

using namespace std;

void sort(int from, int to, int theArray[], int* swaps){
    if((to-from)<=1){
        //*swaps += to-from;
        cout << from << " " << to << endl;
        return;
    }
    int valueOfReference = theArray[to-1];
    int locationOfReference = from;
    for(int i=from;i<to;i++){
        if(theArray[i]<=valueOfReference){
            int temp = theArray[i];
            theArray[i] = theArray[locationOfReference];
            theArray[locationOfReference] = temp;

            locationOfReference++;
        }
    }
    *swaps += to-from;
    cout << from << " " << to << endl;
    sort(0,locationOfReference-1,theArray,swaps);
    sort(locationOfReference+1,to,theArray,swaps);
}
int main(){
    int N,swaps = 0;
    cin >> N;
    
    int theArray[N];
    for(int i=0;i<N;i++){
        cin >> theArray[i];
    }

    sort(0,N,theArray,&swaps);

    for(int i=0;i<N-1;i++){
        cout << theArray[i] << " ";
    }
    cout << theArray[N-1] << endl;
    cout << swaps;
}