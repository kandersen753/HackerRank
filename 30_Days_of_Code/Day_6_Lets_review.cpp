#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numStrings;
    string s;
    vector<string> myStrings;
    string evens;
    string odds;
    
    cin >> numStrings;
    
    for (int i=0; i<numStrings; i++)
    {
        cin >> s;
        myStrings.push_back(s);
    }
    
    for (int i=0; i<myStrings.size(); i++)
    {
        evens = "";
        odds = "";
        for (int j=0; j<myStrings[i].length(); j++)
        {
            if (j%2 == 0)
            {
                evens += myStrings[i][j];
            }
            else
            {
                odds += myStrings[i][j];
            }
        }
        
        cout << evens << " " << odds << endl;
    }
    
    return 0;
}
