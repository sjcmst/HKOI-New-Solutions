#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    float discriminant = pow(b,2)-4*a*c;
    if(discriminant<0){
        printf("None\n");
    }else if(discriminant==0){
        float root = -b/(2.0*a);
        printf("%.3f\n",root);
    }else{
        float root1 = (-b-sqrt(discriminant))/(2.0*a);
        float root2 = (-b+sqrt(discriminant))/(2.0*a);
        if(root1<root2){
            printf("%.3f %.3f\n",root1, root2);
        }else{
            printf("%.3f %.3f\n",root2, root1);
        }
        
    }
    return 0;
}