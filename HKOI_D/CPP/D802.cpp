#include <iostream>

using namespace std;

int main(){
    int N,A, numberOfSwaps = 0;
    cin >> N >> A;
    int array[N];
    for(int i=0;i<N;i++){
        cin >> array[i];
    }
    
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++){
            if(array[j]>array[j+1]&&A==0 || //Ascending: if the previous one is bigger than the next one, swap
                array[j]<array[j+1]&&A==1){ //Descending: if the previous one is smaller than the next one, swap

                numberOfSwaps++;
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

                // for(int i=0;i<N-1;i++){
                //     cout << array[i] << " ";
                // }
                // cout << array[N-1] << endl;
            }
        }
    }

    cout << numberOfSwaps << endl;
    for(int i=0;i<N-1;i++){
        cout << array[i] << " ";
    }
    cout << array[N-1];
}