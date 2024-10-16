#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int calcMoneyDue (int returned[3], int due[3])
{
    //ensure turned in year prior
    if (returned[2] < due[2])
    {
        return 0;
    }
    //check year first
    else if (returned[2] > due[2])
    {
        return 10000;
    }
    //check month
    else if (returned[1] > due[1])
    {
        return 500*(returned[1]-due[1]);
    }
    //check days
    else if (returned[0] > due[0])
    {
        return 15*(returned[0]-due[0]);
    }
    return 0;
}

int main() {
    int returnDate[3];
    int dueDate[3];
    for (int i=0; i<3; i++)
    {
        cin>>returnDate[i];
    } 
    for (int i=0; i<3; i++)
    {
        cin>>dueDate[i];
    }
    
    cout << calcMoneyDue(returnDate, dueDate);
    
    return 0;
}
