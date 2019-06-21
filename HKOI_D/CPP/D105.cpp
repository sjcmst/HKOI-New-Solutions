#include <iostream>

using namespace std;

int main(){
    int y1,m1,d1,y2,m2,d2;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    if(y1>y2){
        cout << "After";
    }else if(y1<y2){
        cout << "Before";
    }else{
        if(m1>m2){
            cout << "After";
        }else if(m1<m2){
            cout << "Before";
        }else{
            if(d1>d2){
                cout << "After";
            }else if(d1<d2){
                cout << "Before";
            }else{
                cout << "Same";
            }
        }
    }
    return 0;
}