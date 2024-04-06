#include <iostream>
using namespace std;

int main(){
    int a;
    cout<< "enter 1st number: ";
    cin>> a;

    int b;
    cout<< "enter 2nd number: ";
    cin>> b;

    int c;
    cout<< "enter 3rd number: ";
    cin>> c;

    if (a>b && a>c){
        cout<< a<< " is the greatest number ";
    }
    if (b>c && b>a){
        cout<< b<< " is the greatest number ";
    }
    if (c>b && c>a){
        cout<< c<< " is the greatset number";
    }
    
}