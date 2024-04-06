#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter your number: ";
    cin>> n;

    if (n%3==0 && n%5==0){
        cout<< "the number is divisible by both 3 and 5 ";
    }
    else{
        cout<< "the number is not divisible by both 3 and 5";
    }
    return 0;
}