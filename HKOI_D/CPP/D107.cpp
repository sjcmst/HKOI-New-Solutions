//falied
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long int i;
    cin >> i;
    bool isTriangular, isSquare;
    //Triangular test
    double resultTriangular = (-1.0+sqrt(1+8*i))/(2.0);
    isTriangular = abs(resultTriangular - (long long int) resultTriangular)<0.0000000001;
    //Square test
    double resultSquare = sqrt(i);
    isSquare = abs(resultSquare - (long long int) resultSquare)<0.0000000001;
    
    if(isTriangular&&isSquare){
        cout << "Both";
    }else if(isTriangular){
        cout << "Triangular";
    }else if(isSquare){
        cout << "Square";
    }else{
        cout << "Neither";
    }
    return 0;
}