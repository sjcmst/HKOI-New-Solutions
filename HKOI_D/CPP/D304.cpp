#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char correctAns[100];
    int isGuessed[100];
    int charactersGuessed = 0;
    cin >> correctAns;
    int L = strlen(correctAns);

    for(int i=0;i<L;i++){
        isGuessed[i] = 0;
    }

    while(charactersGuessed!=L){
        char guess;
        cin >> guess;
        for(int i=0;i<L;i++){
            if(isGuessed[i]==0 /*guessed or not*/ && guess==correctAns[i] /* is correct */){
                isGuessed[i]=1;
                charactersGuessed++;
            }
            if(isGuessed[i]){
                cout << correctAns[i];
            }else{
                cout << "_";
            }
        }
        cout << endl;
    }
}