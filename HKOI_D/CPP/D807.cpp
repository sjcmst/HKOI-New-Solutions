#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int theArray[N];
    for(int i=0;i<N;i++){
        cin >> theArray[i];
    }
    int valueOfReference = theArray[N-1];
    int locationOfReference = 0;

    for(int i=0;i<N;i++){
        if(theArray[i]<=valueOfReference){
            int temp = theArray[i];
            theArray[i] = theArray[locationOfReference];
            theArray[locationOfReference] = temp;

            locationOfReference++;
        }
    }
    for(int i=0;i<N-1;i++){
        cout << theArray[i] << " ";
    }
    cout << theArray[N-1];
}