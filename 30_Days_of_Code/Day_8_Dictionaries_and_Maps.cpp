#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string, long> phoneBook;
    int numInput;
    string nameIn;
    long numberIn;
    
    cin >> numInput;
    
    for (int i = 0; i < numInput; i++)
    {
        cin >> nameIn;
        cin >> numberIn;
        
        phoneBook.insert(make_pair(nameIn, numberIn));
    }
    cin.ignore();
    while(getline(cin, nameIn)){
        if(nameIn.empty())
        {
            break;
        }
        if (phoneBook.find(nameIn) != phoneBook.end())
        {
            cout << nameIn << "=" << phoneBook[nameIn] << endl;
        }
        else 
        {
            cout << "Not found" << endl;
        }
    }
      
    return 0;
}
