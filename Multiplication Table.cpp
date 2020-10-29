#include <iostream>
using namespace std;

int main() {
    int num, n;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Enter range: ";
    cin>> n;

    for (int i = 1; i <= n; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    
    cout << endl <<"Coded by: Argie Villagonzalo";
    
    return 0;
}
