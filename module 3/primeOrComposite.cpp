#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter your number: ";
    cin>> n;
    bool flag= true;//true represents prime
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            flag = false;
            break;
        }
        
    }
    if (n==1) cout<< "Neither prime nor composite";
    else if(flag==true) cout<< "Prime number";
    else cout<< "Composite number";
    return 0;
}