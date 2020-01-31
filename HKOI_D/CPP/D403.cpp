#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char sequence[11];
    cin >> sequence;
    int numberOfWords;
    cin >> numberOfWords;
    char words[numberOfWords][11];
    for(int i=0;i<numberOfWords;i++){
        cin >> words[i];
    }

    for(int i=0;i<numberOfWords;i++){
        int isUsed[strlen(sequence)];
        int impossible = 0;
        for(int j=0;j<strlen(sequence);j++){
            isUsed[j] = 0;
        }
        for(int j=0;j<strlen(words[i]);j++){
            int found = 0;
            for(int k=0;k<strlen(sequence);k++){
                if(words[i][j]==sequence[k]&&isUsed[k]==0){
                    found = 1;
                    isUsed[k] = 1;
                    //log
                    //cout << "Found " << words[i][j] << " at position " << k << endl;
                    break;
                }

            }
            if(!found){
                impossible = 1;
                break;
            }else{

            }
        }
        if(impossible){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
}