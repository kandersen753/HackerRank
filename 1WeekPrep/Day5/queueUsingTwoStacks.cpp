#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;



//inverts the stack data to the other stack

void swapStacks(stack<int> *from, stack<int> *to)
{
    while(!from->empty())
    { 
        to->push(from->top());
        from->pop();
    }
}

int main() {
    int numQueries = 0;
    int currentQuery = 0;
    int currentData = 0;
    stack<int> enqueueStack;
    stack<int> dequeueStack;
    cin >> numQueries;

    
    for (int i=0; i<numQueries; i++)
    {
        cin >> currentQuery;
      
        if (currentQuery == 1){            
            cin >> currentData;
            enqueueStack.push(currentData);
        }
        else{
            //move all element from the enqueue stack to the dequeue stack
            if(dequeueStack.empty()){
                while(!enqueueStack.empty()){
                    dequeueStack.push(enqueueStack.top());
                    enqueueStack.pop();
                }
            }
            if(!dequeueStack.empty()){
                // dequeue the first element from dequeue stack
                if(currentQuery == 2)
                    dequeueStack.pop();
                else
                // print the first element in the queue
                    cout << dequeueStack.top() << endl;
            }
        }   
    }
    
    return 0;
}
