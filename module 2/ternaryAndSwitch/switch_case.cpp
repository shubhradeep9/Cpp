#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter a  number between 1 to 7: " ;
    cin>> n;
    switch (n){
        case 1:
            cout<< "monday";
        case 2:
            cout<< "tuesday";
        case 3:
            cout<< "wednesday";
        case 4:
            cout<< "thursday";
        case 5:
            cout<< "friday";
        case 6:
            cout<< "saturday";
        case 7:
            cout<< "sunday";   
    }
return 0;
}