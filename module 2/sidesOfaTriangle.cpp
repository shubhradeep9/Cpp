#include <iostream>
using namespace std;

int main(){
    int a;
    cout<< "enter 1st side: ";
    cin>> a;

    int b;
    cout<< "enter 2nd side: ";
    cin>> b;

    int c;
    cout<< "enter 3rd side: ";
    cin>> c;
    
    if (a+b>c && b+c>a && c+a>b){
        cout<< a<< ","<<b << ","<<c <<"can be sides of a triangle" ;
    }
    else{
        cout<< "the side lengths are invalid ";
    }
}