#include<iostream>
using namespace std;

int main(){
    float num1, num2;
    char op;
    cout<< "enter your operation: ";
    cin>> num1>> op>> num2;
    switch (op)
    {
    case '+':
        cout<< num1+num2 ;
        break;
    case '-':
        cout<< num1-num2 ;
        break;    
    case '*':
        cout<< num1*num2 ;
        break;
    case '/':
        cout<< num1/num2 ;
        break;
    default:
        break;
    }
}