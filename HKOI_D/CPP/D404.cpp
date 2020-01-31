#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int N; //number of stations
    cin >> N;
    float fare[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> fare[i][j];
        }
    }

    int M; //number of queries
    cin >> M;
    int from[M];
    int to[M];
    char type[M];
    for(int i=0;i<M;i++){
        cin >> from[i] >> to[i] >> type[i];
    }


    for(int i=0;i<M;i++){ //for each euqury
        int firstNum;
        int secondNum;
        //LOG
        //cout << type[i] << endl;
        if(type[i]=='A'){
            firstNum = min(from[i]-1,to[i]-1);
            secondNum = max(from[i]-1,to[i]-1);
            
        }else{
            firstNum = max(from[i]-1,to[i]-1);
            secondNum = min(from[i]-1,to[i]-1);
        }
        printf("%.1f\n",fare[firstNum][secondNum]);
    }
}