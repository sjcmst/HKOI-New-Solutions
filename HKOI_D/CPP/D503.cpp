#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int bars[6];
    for(int i=0;i<6;i++){
        cin >> bars[i];
    }

    ofstream fout("chart.txt");
    fout << "+-------------------------+\n";

    for(int i=10;i>=1;i--){
        fout << "|";
        for(int j=0;j<6;j++){
            fout <<" ";
            if(bars[j]>=i){
                fout << "###";
            }else{
                fout << "   ";
            }
        }
        fout << " |\n";
    }
    fout << "+-------------------------+";
    fout.close();

    return 0;
}
