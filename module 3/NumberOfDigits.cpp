#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter your number: ";
    cin>> n;
    int count= 0;
    while (n>=0)
    {
        n = n / 10;
        count++;
        if (n == 0)
            break;
    }
    cout << "The no. of digits are: " << count << endl;
    return 0;
    
}