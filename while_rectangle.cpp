#include<iostream>

using namespace std;

int main(){
    int x, y;

    x = 1;
    while(x<=5){
        y = 1;
        while(y<=5){
            
            cout<<" * ";
            y++;
            
        }
        cout<<endl;
        x++;
    }
    
    return 0;
}