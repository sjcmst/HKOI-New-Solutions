#include <iostream>

using namespace std;

void merge(int theArray[],int min1, int max1, int min2, int max2){
    int len1 = max1-min1+1;
    int len2 = max2-min2+1;

    int array1[len1], array2[len2];
    for(int i=0;i<len1;i++){
        array1[i] = theArray[min1+i]; 
    }
    for(int i=0;i<len2;i++){
        array2[i] = theArray[min2+i]; 
    }
    int current1 = 0, current2 = 0, currentTheArray = min1;
    for(int i=0;i<len1+len2;i++){
        if(current1<len1&& (current2>=len2 || array1[current1]<array2[current2])){
            theArray[currentTheArray] = array1[current1];
            current1++;
        }else{
            theArray[currentTheArray] = array2[current2];
            current2++;
        }
        currentTheArray++;
    }
}

void mergeSort(int theArray[],int min, int max){
    if(max==min) return;

    int mid = (min+max)/2;
    mergeSort(theArray, min, mid);
    mergeSort(theArray, mid+1,max);
    merge(theArray,min,mid,mid+1,max);
}

int main(){
    int N;
    cin >> N;
    int theArray[N];
    for(int i=0;i<N;i++){
        cin >> theArray[i];
    }
    mergeSort(theArray, 0, N-1);

    for(int i=0;i<N-1;i++){
        cout << theArray[i] << " ";
    }
    cout << theArray[N-1];
}