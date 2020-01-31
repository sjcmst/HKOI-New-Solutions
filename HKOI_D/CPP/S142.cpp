#include <iostream>

using namespace std;

void initTest(int test[], int N){
    for(int i=0;i<N;i++){
        test[i]=0;
    }
}
int setTest(int O[], int test[], int N, int i, int j){
    int returnVal = 0;
    for(int k = 0;k<i;k++){
        int location = j+k>=N?j+k-N:j+k;
        test[O[location]] = 1;
        returnVal = min(O[location],returnVal);
    }
    return returnVal;
}

int checkTest(int test[], int N, int i, int returnVal){
    int consecutive = 0;
    for(int k = 0;k<N;k++){
       if(test[k]==1){
            //int k = returnVal;
            consecutive = 1;
            for(int l = k; l < i; l++){
                int location = k+l>=N?k+l:k+l-N; 
                if(test[location]!=1){
                    consecutive = 0;
                }
            }
            if(consecutive){
                break;
            }
           
       }
    }
    return consecutive;
}
int main(){
    int N;
    cin >> N;

    int O[N];
    for(int i=0;i<N;i++){
        cin >> O[i];
        O[i]-=1;
    }

    int test[N];
    initTest(test,N);

    int output = N;
    if(N==2){
        output = 1;
    }

    for(int i=2;i<=N/2;i++){
        if(i*2==N){
            for(int j=0;j<N/2;j++){
                initTest(test,N);
                int returnVal = setTest(O,test,N,i,j);
                output+=checkTest(test,N,i,returnVal);
                cout << "log " << i << " " << j <<" "<< returnVal << " " << checkTest(test,N,i,returnVal) << endl;
                cout << "log test";
                for(int k = 0;k<N;k++){
                   cout << test[k] << " ";
                }
                cout << endl;
            }
        }else{
            for(int j=0;j<N;j++){
                initTest(test,N);
                int returnVal = setTest(O,test,N,i,j);
                output+=checkTest(test,N,i,returnVal);
                cout << "log " << i << " " << j <<" "<< returnVal << " " << checkTest(test,N,i,returnVal) << endl;
                cout << "log test";
                for(int k = 0;k<N;k++){
                   cout << test[k] << " ";
                }
                cout << endl;
            }
        }
    }

    cout << output;
    return 0;
}
