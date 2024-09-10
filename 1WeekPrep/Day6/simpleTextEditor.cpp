#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    
    string currentString = "";
    stack<string> stack;
    stack.push(currentString);
    int numOperations;
    cin >> numOperations;
    
    for (int i=0; i<=numOperations; i++)
    {
        string operation;
        getline(cin, operation);
        
        if (operation[0] == '1')
        {
            // append
            currentString.append(operation.substr(2, operation.length() - 2));
            stack.push(currentString);
        }
        else if (operation[0] == '2')
        {
            // delete
            currentString = currentString.substr(0, currentString.length() - stoi(operation.substr(2, operation.length() - 2)));
            stack.push(currentString);
        }
        else if (operation[0] == '3')
        {
            // print
            cout << currentString[stoi(operation.substr(2, operation.length() - 2)) - 1] << endl;
        }
        else if (operation[0] == '4')
        {
            // undo
            stack.pop();
            currentString = stack.top();
        }
    }
    
    return 0;
}