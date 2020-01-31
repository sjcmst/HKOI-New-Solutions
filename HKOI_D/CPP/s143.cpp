#include <iostream>

using namespace std;


int main(){
    int N,L,W;
    cin >> N >> L;
    char* correctWords[N];
    for(int i=0;i<N;i++){
        char unsortedWord[L];
        int sorted = 0, min = 0, max = i, mid = i/2, character = 0;
        cin >> unsortedWord;
        while(!sorted){
            if(max==min){
                for(int j = i-1;j>=mid;j--){
                    correctWords[j+1]=correctWords[j];
                }
                correctWords[mid] = unsortedWord;
                sorted = 1;
            }else{
                character = 0;
                if(correctWords[mid][character]>unsortedWord[character]){
                    max = mid;
                    mid = (max+min)/2;
                }else if(correctWords[mid][character]<unsortedWord[character]){
                    min = mid;
                    mid = (max+min)/2;
                }else{
                    character++;
                    if(character == L) max = min;
                }
            }
            cout << "SORT" << max << min << mid << character << endl;

        }
    }
    
    //input checking LOG
    for(int i=0;i<N;i++){
        cout << correctWords[i] << endl;
    }

    cin >> W;
    char wrongWords[W][L];
    for(int i=0;i<W;i++){
        cin >> wrongWords[i];
    }
}