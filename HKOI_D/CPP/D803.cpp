#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int sortedArray[N];
    for(int i=0;i<N;i++){
        int candidate;
        cin >> candidate;
        int index = 0;
        while(index<i&&candidate>sortedArray[index]){
            index++;
        }
        for(int j=i-1;j>=index;j--){
            sortedArray[j+1] = sortedArray[j];
        }
        sortedArray[index] = candidate;

        for(int j=0;j<i;j++){
            cout << sortedArray[j] << " ";
        }
        cout << sortedArray[i] << endl;

    }
    return 0;
}
