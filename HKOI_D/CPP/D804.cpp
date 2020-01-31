#include <iostream>

using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    int aN[N], aM[M], aC[N+M];
    for(int i=0;i<N;i++){
        cin >> aN[i];
    }
    for(int i=0;i<M;i++){
        cin >> aM[i];
    }
    int countN = 0, countM = 0;
    while(countN<N||countM<M){
        if((countM<M)&&(countN==N||aM[countM]<aN[countN])){
            aC[countM+countN] = aM[countM];
            countM++;
        }else{
            aC[countM+countN] = aN[countN];
            countN++;
        }

        //LOG
        //for(int i=0;i<(countM+countN-1);i++){
        //    cout << aC[i] << " ";
        //}
        //cout << aC[countM+countN-1] << endl;
    }

    for(int i=0;i<(countM+countN-1);i++){
        cout << aC[i] << " ";
    }
    cout << aC[countM+countN-1];

    return 0;
}
