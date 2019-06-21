#include <iostream>
#include <cmath>

using namespace std;

int calculate(int num1,char o,int num2){
    switch(o){
        case '+':
            return num1+num2;
        case '-':
            return num1-num2;
        case '*':
            return num1*num2;
    }
}

int main(){
    int a,b,c;
    char x,y;

    cin >> a >> x >> b >> y >> c;

    if(y=='*'){
        int result = calculate(b,y,c);
        cout << calculate(a,x,result);
                
    }else{
        int result = calculate(a,x,b);
        cout << calculate(result,y,c);
    }

    return 0;
}

