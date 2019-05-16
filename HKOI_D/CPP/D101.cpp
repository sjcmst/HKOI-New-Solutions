#include <iostream>

using namespace std;

int main(){
    char a;
    cin >> a;

    if(a=='2'||a=='3'){
        cout << "Fixed" << endl;
    }else if(a=='5'||a=='6'||a=='9'){
        cout << "Mobile" << endl;
    }
    return 0;
}