#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> nums;
    int numQueries = 0;
    int numIn;
    cin >> numQueries;
    bool isPrime = false;
    for (int i=0; i<numQueries; i++)
    {
        cin >> numIn;
        nums.push_back(numIn);
    }
    
    for (int i=0; i<numQueries; i++)
    {
        isPrime = false;
        if (nums[i] > 1)
        {
            for (int j = 2; j*j <= nums[i] && !isPrime; j++)
            {
                if (nums[i]%j == 0)
                {
                    isPrime = true;
                    cout << "Not prime" << endl;
                }
            }
            if (!isPrime)
            {
                cout << "Prime" << endl;
            }
        }
        else
        {
            cout << "Not prime" << endl;
        }

    }
    
    return 0;
}
