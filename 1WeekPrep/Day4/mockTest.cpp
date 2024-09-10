/*
* Complete the 'truckTour' function below.
*
* The function is expected to return an INTEGER.
* The function accepts 2D_INTEGER_ARRAY petrolpumps as parameter.
*/

int truckTour(vector<vector<int>> petrolpumps) 
 {
    int petrolRemain = 0;
    int state = 0;

    for (int i=0; i<petrolpumps.size(); i++)
     {
        petrolRemain += petrolpumps[i][0] - petrolpumps[i][1];

        // check if remaining petrol is empty, reset the counter, and start
        //from the next pumpstation
        if (petrolRemain < 0)
         {
            state = i+1;
            petrolRemain = 0;
            }
     }
return state;
}
