/*
* Complete the 'pairs' function below.
*
* The function is expected to return an INTEGER.
* The function accepts following parameters:
* 1. INTEGER k
* 2. INTEGER_ARRAY arr
*/
int pairs(int k, vector<int> arr) {
 int counter = 0;
 for (int i=0; i<arr.size()-1; i++)
    {
     for (int j=i+1; j<arr.size(); j++)
        {
         if (arr[j] - arr[i] == k || arr[i] - arr[j] == k)
            {
             counter++;
            }
        }
    }
 return counter;
}
