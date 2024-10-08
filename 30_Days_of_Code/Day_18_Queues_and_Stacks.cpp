#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution {
    stack<char> solStack;
    queue<char> solQueue;
    //Write your code here
    private:
    
    public:
    void pushCharacter(char letter)
    {
        solStack.push(letter);
    }
    void enqueueCharacter(char letter)
    {
        solQueue.push(letter);
    }
    char popCharacter()
    {
        char returnChar;
        returnChar = solStack.top();
        solStack.pop();
        return returnChar;
    }
    char dequeueCharacter()
    {
        char returnChar;
        returnChar = solQueue.front();
        solQueue.pop();
        return returnChar;
    }
    

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}