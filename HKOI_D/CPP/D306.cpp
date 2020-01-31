#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char email[100],front[100],end[100];
    cin >> email;
    
    //check the location of @, separate into 2
    for(int i=0;i<strlen(email);i++){
        if(email[i]=='@'){
            for(int j=0;j<i;j++){
                front[j] = email[j];
            }
            front[i] = '\0';

            for(int j=i+1;j<strlen(email);j++){
                end[j-i-1] = email[j];
            }
            end[strlen(email)-i-1] = '\0';

            //LOG
            //cout << front << endl << end << endl;
            break;
        }
        
    }

    //validate front
    if(strlen(front)==0){
        cout << "Invalid";
        //cout << "Front length = 0";
        return 0; 
    }
    for(int i=0;i<strlen(front);i++){
        if(front[i]>=48&&front[i]<=57 //0-9
            ||front[i]>=65&&front[i]<=90 //large letter
            ||front[i]>=97&&front[i]<=122 //small letter
            ||front[i]=='+'){
                continue;

        //. may not appear in the beginning, or at the end, or consecutively.
        }else if(front[i]=='.'){
            if(i==0||i==strlen(front)-1||front[i+1]=='.'){
                cout << "Invalid";
                //cout << "Appearance of dot, front";
                return 0;
            }else{
                continue;
            }
        }else{
            cout << "Invalid";
            //cout << "Invalid character, front";
            return 0;  
        }
    
    }

    //validate end
    int numberOfDot = 0;
    if(strlen(end)<3){
        cout << "Invalid";
        //cout << "End length too short";
        return 0; 
    }
    for(int i=0;i<strlen(end);i++){
        if(end[i]>=48&&end[i]<=57 //0-9
            ||end[i]>=65&&end[i]<=90 //large letter
            ||end[i]>=97&&end[i]<=122 //small letter
            ){
                continue;
        }else if(end[i]=='.'){
            if(i==0||i==strlen(end)-1||end[i+1]=='.' //. may not appear in the beginning, or at the end, or consecutively. It also has to appear at least once.
                ||end[i+1]=='-'){ //- may not appear next to .
                cout << "Invalid";
                //cout << "Appearance of dot, end";
                return 0;
            }else{
                numberOfDot++;
                continue;
            }
        }else if(end[i]=='-'){
            if(end[i+1]=='.'){ //- may not appear next to .
                //cout << "Appearance of dash, end";
                cout << "Invalid";
                return 0;
            }else{
                continue;
            }
        }else{
            cout << "Invalid";
            //cout << "Invalid character, end";
            return 0;  
        }
    
    }

    if(numberOfDot==0){
        cout << "Invalid";
        //cout << "No dot, end";
        return 0;  
    }

    cout << "Valid";
    return 0;
}