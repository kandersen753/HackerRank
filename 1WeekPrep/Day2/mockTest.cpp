/*
* Complete the 'flippingMatrix' function below.
*
* The function is expected to return an INTEGER.
* The function accepts 2D_INTEGER_ARRAY matrix as parameter.
*/
int flippingMatrix(vector<vector<int>> matrix) {
 int half = matrix[0].size()/2;
 int sum = 0;
 for (int i=0; i<half; i++)
 {
 {
 for (int j=0; j<half; j++)
 {
 sum += max({matrix[i][j], matrix[i][matrix[0].size()-1-j],
matrix[matrix[0].size()-1-i][j], matrix[matrix[0].size()-1-i]
[matrix[0].size()-1-j]});
 }
 }
 }

 return sum;
}
