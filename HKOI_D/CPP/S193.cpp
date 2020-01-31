#include <iostream>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    char sequence[N];
    for(int i=0;i<N;i++){
        cin >> sequence[i];
    }
    int isConsec = 0;
    char consecDish = '\0';
    int numberOfConsec = 1;
    for(int i=0;i<N;i++){
        if(sequence[i]==consecDish){
            numberOfConsec++;
        }else{
            //change the menu, clear the variables
            if(isConsec){
                switch(numberOfConsec){ //need to add more cases
                    case 2:
                        do{
                            sequence[i-1] = ((sequence[i-1]=='a') ? ('a'+K-1) : (sequence[i-1]-1));
                        }while(sequence[i]==sequence[i-1]);
                        break;
                    case 3:
                        sequence[i-2] = ((sequence[i-2]=='a') ? ('a'+K-1) : (sequence[i-2]-1));
                        break;
                }
                isConsec = 0;
                numberOfConsec = 1;
            }
            consecDish = sequence[i];
        }
    }
    if(isConsec){
        int i=0;
        while(isConsec){
            if(sequence[i]==consecDish){
                numberOfConsec++;
            }else{
                //change the menu, clear the variables
                if(isConsec){
                    switch(numberOfConsec){ //need to add more cases
                        case 2:
                            do{
                                sequence[i-1] = ((sequence[i-1]=='a') ? ('a'+K-1) : (sequence[i-1]-1));
                            }while(sequence[i]==sequence[i-1]);
                            break;
                        case 3:
                            sequence[i-2] = ((sequence[i-2]=='a') ? ('a'+K-1) : (sequence[i-2]-1));
                            break;
                    }
                    isConsec = 0;
                    numberOfConsec = 1;
                }
                consecDish = sequence[i];
            }
            i++;
        }
    }

    for(int i=0;i<N;i++){
        cout << sequence[i];
    }
}