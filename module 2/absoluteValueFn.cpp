#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter your integer : ";
    cin>> n;

    if (n>0){
        // printf("even number");
        cout<<"the absolute value is " << n;
    }
    else{
        // printf("odd number");
        cout<<"the absolute value is " << -n;
    }
    return 0;
}