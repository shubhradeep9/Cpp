#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<< "enter your character ";
    cin>> ch;
    int ascii= (int)ch;

    if ((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90))
    {
        cout<< "the entered character is a alphabet";
    }
    else{
        cout<< "the entered character is not an alphabet" ;
    }
}