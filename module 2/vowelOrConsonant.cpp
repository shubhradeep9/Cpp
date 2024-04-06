#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<< "enter your alphabet ";
    cin>> ch;
    int ascii= (int)ch;

    if ((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90))
    {
        if (ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
        {
            cout<< "the alphabet is vowel";
        }
        else{
            cout<< "the alphabet is consonant";
        }
       
    }
    else{
        cout<< "the entered character is not an alphabet" ;
    }
}