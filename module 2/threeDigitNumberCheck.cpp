#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter your number: ";
    cin>> n;

    if (n>=100 && n<=999){
       
        cout<< "it is a three digit numeber ";
    }
    else{
        
        cout<< "it is NOT a three digit number ";
    }
    return 0;
}
