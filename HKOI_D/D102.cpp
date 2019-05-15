#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    char dummy;
    float fullFare;
    float halfFare;
    cin >> dummy >> fullFare;
    halfFare = fullFare/2;
    halfFare = ceilf(halfFare*10)/10;
    printf("$%.1f",halfFare);
    return 0;
}