#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    printf("%.3f",1/2.0*a*b*sin(c/180.0*3.1415926));
    return 0;
}