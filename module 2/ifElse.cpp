#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter your number: ";
    cin>> n;

    if (n%2==0){
        cout<< "even number";
    }
    else{
        cout<< "odd number";
    }
    return 0;
}