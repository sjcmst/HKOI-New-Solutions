#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    //INPUT
    int itemsOnStock, itemsBought;
    float price;

    cin >> itemsOnStock;
    char stocksCode[itemsOnStock][14];
    float stocksPrice[itemsOnStock];

    for(int i=0;i<itemsOnStock;i++){
        cin >> stocksCode[i];
        cin >> stocksPrice[i];
    }

    cin >> itemsBought;
    char itemsCode[itemsBought][14];

    for(int i=0;i<itemsBought;i++){
        cin >> itemsCode[i];
    }

    //PROCESS
    for(int i=0;i<itemsBought;i++){
        for(int j=0;j<itemsOnStock;j++){
            if(strcmp(stocksCode[j],itemsCode[i])==0){
                price += stocksPrice[j];
                break;
            }
        }
    }

    printf("%.1f",price);
}