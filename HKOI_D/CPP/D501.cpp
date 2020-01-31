#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream inputFile ("account.txt");

    char rubbish[6];
    inputFile.getline(rubbish,6);
    int totalSum = 0;
    while(inputFile.good()){
        char line[6];
        int isNegative = 0;
        inputFile.getline(line,6);
        //cout << "LOG2: " << line << endl;
        if(line[0]=='-'){
            isNegative=1;
        }
        int i=strlen(line)-1; /*if negative, start from 1, else 0*/
        //cout << "LOG3: " << i << endl;
        int placeValue = 1;
        int sum = 0;
        while(i!=isNegative-1){
            sum+=(line[i]-48)*placeValue;
            //cout << "LOG4: " << line[i] << " " << placeValue << endl;
            placeValue*=10;
            i--;
        }
        if(isNegative){
            totalSum -= sum;
        }else{
            totalSum += sum;
        }

        //cout << "LOG: " << totalSum << endl;
    }
    cout << totalSum;
    return 0;
}
