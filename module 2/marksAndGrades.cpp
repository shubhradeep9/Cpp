#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter your marks: ";
    cin>> n;
    
    if (n>= 91){
        cout<< "your grade is S";
    }
    else{
        if(n>=81){
            cout<< "your grade is A";
        }
        else{
            if(n>=71){
                cout<< "your grade is B";           
            }
            else{
                if(n>=61){
                    cout<< "your grade is C";
                }
                else{
                    if(n>=51){
                        cout<< "your grade is D";
                    }
                    else{
                        if(n>=41){
                            cout<< "your grade is E";
                        }
                        else{
                            cout<< "fail";
                        }
                    }
                }
            }

        }
    }
}