#include <iostream>
using namespace std;

int main(){
    int cp, sp;
    cout<< "enter cost price : ";
    cin>> cp;

    cout<<"enter selling price: ";
    cin>> sp;

    if (sp>cp){
        cout<< "profit = "<< sp-cp ;
    }
    if (cp>sp){
        cout<< "loss = "<< cp-sp ;
    }
    if(cp==sp){
        cout<< "neither profit nor loss ";
    }
    return 0;
}