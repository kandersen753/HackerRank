#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int myInt = 0;
    double mydub = 0;
    string myS = "";
    // Read and save an integer, double, and String to your variables.
    cin >> myInt;
    cin >> mydub;
    cin.ignore();
    getline(std::cin, myS);
    // Print the sum of both integer variables on a new line.
    cout << i + myInt << endl;
    
    // Print the sum of the double variables on a new line.
    mydub+= d;
    printf("%.1f\n", mydub);
    // Concatenate and print the String variables on a new line
    s += myS;
    // The 's' variable above should be printed first.
    cout << s << endl;
    return 0;
}