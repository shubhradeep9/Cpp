#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<< "enter your marks: ";
    cin>> marks;
    // ternary operator format
    // (condition) ? true : false ;
    (marks>=33 && marks<=100) ? cout<< "pass" : cout<< "fail" ;

    
}