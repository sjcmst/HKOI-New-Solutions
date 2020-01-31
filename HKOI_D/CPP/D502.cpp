#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

int main()

{
    int minWeather = 0;
    int maxWeather = 0;
    int firstTime = 1;
    ifstream fin ("weather.txt");

    while(fin.good()){
        char weatherLine[50];
        fin.getline(weatherLine,50);
        //cout << "LOG2: " << weatherLine << endl;
        int i=32;
        int sum=0;
        while(weatherLine[i]>=48&&weatherLine[i]<=57){
            sum*=10;
            sum+=weatherLine[i]-48;
            i++;
        }
        //cout << "LOG: " << sum << endl;
        if(firstTime){
            minWeather=sum;
            maxWeather=sum;
            firstTime = 0;
        }else{
            if(sum<minWeather){
                minWeather=sum;
            }else if(sum > maxWeather){
                maxWeather = sum;
            }
        }
    }

    cout << minWeather << " " << maxWeather;
    return 0;
}
