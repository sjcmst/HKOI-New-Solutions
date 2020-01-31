#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    int numberOfWordsInDictionary;
    cin >> numberOfWordsInDictionary;
    fflush(stdin);
    char dictionaryA[numberOfWordsInDictionary][20];
    char dictionaryB[numberOfWordsInDictionary][20];
    for(int i=0;i<numberOfWordsInDictionary;i++){
        gets(dictionaryA[i]);
        gets(dictionaryB[i]);
    }

    int numberOfSentences;
    cin >> numberOfSentences;
    fflush(stdin);
    
    char sentences[numberOfSentences][10001];
    char patternA[numberOfSentences][27];
    char patternB[numberOfSentences][27];
    for(int i=0;i<numberOfSentences;i++){
        gets(sentences[i]);
        gets(patternA[i]);
        gets(patternB[i]);
    }

    for(int i=0;i<numberOfSentences;i++){
        if(1/*strcmp(patternA[i],patternB[i])==0*/){ //subtasks 1,2
            char originalWords[26][20];
            int totalNumberOfWords = 0;
            //cout << strlen(sentences[i]) << endl;
            char theWord[20];
            int wordLength = 0;
            for(int j=0;j<strlen(sentences[i]);j++){ //chop the sentence into words
                if(sentences[i][j]==' '){
                    theWord[wordLength] = '\0';
                    //cout << theWord << endl;
                    strcpy(originalWords[totalNumberOfWords],theWord);
                    totalNumberOfWords++;
                    wordLength=0;
                }else{
                    theWord[wordLength] = sentences[i][j];
                    wordLength++;
                }
            }
            theWord[wordLength] = '\0';
            strcpy(originalWords[totalNumberOfWords],theWord);
            totalNumberOfWords++;

            // for(int j=0;j<totalNumberOfWords-1;j++){
            //     cout << originalWords[j] << " ";
            // }
            // cout << originalWords[totalNumberOfWords-1] <<  endl << endl;


            char newWords[26][20];
            for(int j=0;j<totalNumberOfWords;j++){ //translate the sentence
                //cout << "Hello world" << endl;
                int found = 0;
                for(int k=0;k<numberOfWordsInDictionary;k++){
                    if(strcmp(originalWords[j],dictionaryA[k])==0){
                        int requiredLocation;
                        for(int l=0;l<strlen(patternA[i]);l++){
                            if(patternB[i][l]==patternA[i][j]){
                                requiredLocation = l;
                            }
                        }
                        strcpy(newWords[requiredLocation],dictionaryB[k]);
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    int requiredLocation;
                    for(int l=0;l<strlen(patternA[i]);l++){
                        if(patternB[i][l]==patternA[i][j]){
                            requiredLocation = l;
                        }
                    }
                    strcpy(newWords[requiredLocation],originalWords[j]);
                }
            }
            for(int j=0;j<totalNumberOfWords-1;j++){
                cout << newWords[j] << " ";
            }
            cout << newWords[totalNumberOfWords-1];
            if(i!=numberOfSentences-1){
                cout << endl;
            }
        }
    }
}