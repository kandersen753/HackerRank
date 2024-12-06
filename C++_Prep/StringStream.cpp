#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	char delimeter = ',';
    vector<int> values;
    string currentVal = "";
    //step through string
    for (int i=0; i<str.length(); i++)
    {
        //if at end of string or a delimeter
        if (str[i] == delimeter || i == str.length()-1)
        {
            //add final value to temporary string
            if (i == str.length()-1)
            {
                currentVal += str[i];
            }
            //push the converted int and reset temporary string
            values.push_back(stoi(currentVal));
            currentVal = "";
        }
        //push back the current value
        else
        {
            currentVal += str[i];
        }
    }

    return values;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}