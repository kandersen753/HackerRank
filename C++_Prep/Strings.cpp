#include <iostream>
#include <string>
using namespace std;

int main() {
	string first;
    string second;
    char temp;
    
    cin >> first >> second;
    
    cout << first.length() << " " << second.length() << endl;
    cout << first+second << endl;
    
    temp = first[0];
    first[0] = second[0];
    second[0] = temp;
    
    cout << first << " " << second;
  
    return 0;
}