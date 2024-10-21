#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int numArrays;
    int numQueries;
    int** arrays; 
    int arrSize;
    int q1;
    int q2; 
    
    //get number of arrays and queries
    cin >> numArrays;
    cin >> numQueries;
    
    //allocate memory for each array
    arrays = new int*[numArrays];
    
    //allocate memory and read in each array
    for (int i=0; i<numArrays; i++)
    {
        cin >> arrSize;
        arrays[i] = new int[arrSize];
        for (int j=0; j<arrSize; j++)
        {
            cin >> arrays[i][j];
        }
    }
    
    for (int i=0; i<numQueries; i++)
    {
        cin >> q1;
        cin >> q2;
        cout << arrays[q1][q2] << endl;
    }
    
    
    
    
    return 0;
}
