#include <iostream>

using namespace std;

int sort(char sequence[], int N, int K){
    int numberOfChanges = 0;
    char consecDish = '\0';
    for(int i=0;i<N;i++){
        if(sequence[i]==consecDish){
            int numberOfLoops = 0;
            do{
                sequence[i] = ((sequence[i]=='a') ? ('a'+K-1) : (sequence[i]-1));
                numberOfLoops++;
            }while( (sequence[i]==sequence[(i+1>=N ? i+1-N : i+1)]||sequence[i]==consecDish)  && numberOfLoops<K);
            if(numberOfLoops>=K){
                // numberOfLoops=0;
                // cout << "Second loop, sequence i = " << sequence[i] << endl;
                // do{
                //     sequence[i-1] = ((sequence[i-1]=='a') ? ('a'+K-1) : (sequence[i-1]-1));
                //     numberOfLoops++;
                // }while( (sequence[i-1]==sequence[(i-2<0 ? i-2+N : i-2)]||sequence[i-1]==consecDish)  && numberOfLoops<K);
                //     if(numberOfLoops>=K){
                //         cout << "Impossible";
                //         return 0;
                //     }
                sequence[i+1] = sequence[i-1];
                numberOfChanges++;

                int numberOfLoops = 0;
                do{
                    sequence[i] = ((sequence[i]=='a') ? ('a'+K-1) : (sequence[i]-1));
                    numberOfLoops++;
                }while( (sequence[i]==sequence[(i+1>=N ? i+1-N : i+1)]||sequence[i]==consecDish)  && numberOfLoops<K);
                if(numberOfLoops>=K){
                    cout << "Impossible";
                    return -1;
                }
            }
            numberOfChanges++;
            // for(int i=0;i<N;i++){
            //     cout << sequence[i];
            // }
            // cout << endl;
        }
        consecDish = sequence[i];
    }
    
    //see if the first is equal to the last
    if(sequence[0]==consecDish&&N!=1){
        int numberOfLoops = 0;
        do{
            sequence[0] = ((sequence[0]=='a') ? ('a'+K-1) : (sequence[0]-1));
            numberOfLoops++;
        }while( (sequence[0]==sequence[1] || sequence[0]==consecDish) && numberOfLoops<K);
        if(numberOfLoops>=K){
            cout << "Impossible";
            return -1;
        }
        // for(int i=0;i<N;i++){
        //     cout << sequence[i];
        // }
        // cout << "from lower" << endl;
        numberOfChanges++;
    }
    return numberOfChanges;
}
int main(){
    int N, K;
    cin >> N >> K;
    char sequence[N];
    for(int i=0;i<N;i++){
        cin >> sequence[i];
    }
    
    if(N%2==1&&K==2){
        cout << "Impossible";
        return 0;
    }
    int numberOfChanges;
    numberOfChanges = sort(sequence,N,K);
    // do{
    //     numberOfChanges = sort(sequence,N,K);
    // }while(numberOfChanges>N/2);
    
    // sequence[0]--;
    if(numberOfChanges==-1){
        return 0;
    }
    if(numberOfChanges>N/2){
        numberOfChanges = N - numberOfChanges;
        for(int i=0;i<N;i++){
            sequence[i] = 195-sequence[i];
        }
        
    }
    cout << numberOfChanges << endl;
    for(int i=0;i<N;i++){
        cout << sequence[i];
    }
}