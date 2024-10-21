#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int _int;
    long _long;
    char _char;
    float _float;
    double _double;
    cin >> _int >> _long >> _char >> _float >> _double;
    std::cout << std::setprecision(9) << std::fixed;
    cout << _int << endl;
    cout << _long << endl;
    cout << _char << endl;
    cout << _float << endl;
    cout << _double << endl;
    
    return 0;
}
