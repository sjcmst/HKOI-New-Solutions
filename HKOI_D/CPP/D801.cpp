#include <iostream>

using namespace std;

// void sort(int findFrom[],int N){
//     if(N==1){
//         // if(findFrom[1]<findFrom[0]){
//         //     int temp = findFrom[0];
//         //     findFrom[0] = findFrom[1];
//         //     findFrom[1] = temp;
//         // }
//         return;
//     }else{
//         int firstHalf[(N+1)/2];
//         int secondHalf[N/2];
//         for(int i=0;i<(N+1)/2;i++){
//             firstHalf[i] = findFrom[i];
//         }
//         for(int i=0;i<N/2;i++){
//             secondHalf[i] = findFrom[i+(N+1)/2];
//         }
//         //cout << "Start recursion" << endl;
//         sort(firstHalf,(N+1)/2);
//         sort(secondHalf,N/2);
//         int firstPointer = 0, secondPointer = 0;
//         for(int i=0;i<N;i++){
//             if(!(firstPointer>(N+1)/2)&&(secondPointer>N/2||firstHalf[firstPointer]>secondHalf[secondPointer])){
//                 findFrom[i] = firstHalf[firstPointer];
//                 firstPointer++;
//             }else{
//                 findFrom[i] = secondHalf[secondPointer];
//                 secondPointer++;
//             }
//         }
//         //cout << "sorting" << endl;
//         return;

//     }


//}
int main(){
    int N,Q;
    cin >> N >> Q;

    int findFrom[N];
    int toFind[Q];
    for (int i=0;i<N;i++){
        cin >> findFrom[i];
    }
    for (int i=0;i<Q;i++){
        cin >> toFind[i];
    }

    for(int i=0;i<Q;i++){
        int maxPt = N, minPt = 0, midPt, midValue, found=0;
        do{
            midPt = (maxPt+minPt)/2;
            midValue = findFrom[midPt];
            if(toFind[i]==midValue){
                found = 1;
            }else if(toFind[i]>midValue){
                minPt = midPt+1;
            }else{
                maxPt = midPt;
            }
            //cout << minPt << " " << maxPt << endl;

        }while(maxPt!=minPt&&!found);

        if(found){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    
}