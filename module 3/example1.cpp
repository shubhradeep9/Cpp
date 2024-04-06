#include <iostream>
using namespace std;

int main() {
    int a=1, num_of_lines;
    cout << "Enter number to no of lines: ";
    cin >> num_of_lines;
    for(int i=1; i<=num_of_lines ; i++){
        for(int j=1; j<i+1 ;j++){
            cout<< a<< " ";
            a++;
        }
        cout<< endl ;
    }
}