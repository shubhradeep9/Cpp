#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter your integer: ";
    cin>> n;
    
    // if ((n%3==0 || n%5==0 )&& n%15!=0)
    // {
    //   cout<<"the number is divisible by 5 or divisible by 3 and not divisible by 15 ";
    // }
    // else{
    //     cout<<"conditions not met ";
    // }

    if (n%3==0 || n%5==0)
    {
        if (n%15!=0)
        {
            cout<< "the  number is divisible by 3 or 5 and not by 15 ";
        }
        else{
            cout<< "conditions not met ";
        }
    }
    
    else{
        cout<< "conditions not met ";
    }
}
